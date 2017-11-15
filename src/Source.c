#include "Definitions.h"                // Подключение файла с определениями
#pragma config OSC       = INTIO67      // Internal oscillator block, port function on RA6 and RA7
#pragma config FCMEN     = OFF          // Fail-Safe Clock Monitor disabled
#pragma config IESO      = OFF          // Internal/External Oscillator Switchover bit, Two-Speed Start-up is disabled in INTIO osc mode
#pragma config PWRT      = OFF          // Power-up Timer disabled
#pragma config BOREN     = OFF          // Brown-out Reset disabled in hardware and software 
#pragma config BORV      = 0            // VBORMV is set to 3.0V
#pragma config WDT       = OFF          // WDT disabled in hardware; SWDTEN bit disabled
#pragma config CCP2MX    = PORTC        // ECCP2 is multiplexed with RC1
#pragma config PBADEN    = OFF          // PORTB<4:0> pins are configured as digital I/O on Reset
#pragma config MCLRE     = ON           // MCLR pin enabled; RE3 input pin disabled
#pragma config LVP       = OFF          // Single-Supply ICSP disabled 
#pragma config XINST     = OFF          // Instruction set extension and Indexed Addressing mode disabled (Legacy mode)          

unsigned char field[FIELD_SIZE_X][FIELD_SIZE_Y];
unsigned char iActive = 0, jActive = 0;
unsigned char gameStatus = 0;
unsigned char flagsSet = 0;
unsigned char cellsOpened = 0;
unsigned char startBombsCount = 15;
unsigned char bombsCount = 0;
volatile unsigned int secondsFromStart = 0;
volatile char isNeedToWriteTime = 0;

void Int_Handle (void);

#pragma code HIGH_INT_VECTOR = 0x8 // Код помещается в ячейку 0x08
void high_ISR (void)
{
	_asm
	goto Int_Handle
	_endasm
}
#pragma code

#pragma interrupt Int_Handle
void Int_Handle (void)
{
	if (INTCONbits.TMR0IF == 1 && INTCONbits.TMR0IE == 1)
	{
		TMR0H = 0xE1; // Загрузка значения в старший байт 21
		TMR0L = 0x7A; // Загрузка значения в младший байт
		secondsFromStart++;
		isNeedToWriteTime = 1;
		INTCONbits.TMR0IF = 0; // Сброс флага прерывания Тimer0 24
}
	
	return;
}


unsigned char PicCfg[12][16] = { 0 };  

void Init(void)
{
	unsigned char Seed;
	Seed = EEPROM_Read (EEPROM_ADDR);
    srand (Seed++);
    EEPROM_Write (EEPROM_ADDR, Seed); 

    PORTA = 0x00;
    PORTB = 0x00;
    PORTC = 0x00;
    PORTD = 0x00;
    PORTE = 0x00;
    
    TRISA = 0xF0;
    TRISB = 0xFF;
    TRISC = 0x00;
    TRISD = 0x00;
    TRISE = 0x00;
	
	TRISB = 0b00111111;
	// Настройка прерываний: разрешение, приоритет
	RCONbits.IPEN = 1; // Включение приоритетов прерываний
	INTCON2bits.TMR0IP = 1; // Высокий приоритет прерывания Timer0
	INTCONbits.TMR0IE = 1; // Разрешение прерывания от Timer0
	INTCONbits.TMR0IF = 0; // Сброс флага прерывания
	INTCONbits.GIEH = 1; // Разрешение при?ма всех прерываний
	INTCONbits.GIEL = 0; // Запрет прерываний низкого уровня
	// Побитовая настройка таймера-сч?тчика Timer0
	T0CONbits.T08BIT = 0; // Режим 16 бит
	T0CONbits.T0CS = 0; // Внутренний источник тактирования
	T0CONbits.PSA = 0; // Включение предделителя
	T0CONbits.T0PS2 = 1; // Задание коэффициента деления 1:256
	T0CONbits.T0PS1 = 1;
	T0CONbits.T0PS0 = 1;
	TMR0H = 0xE1; // Загрузка значения в старший байт
	TMR0L = 0x7A; // Загрузка значения в младший байт
	
    LCD_Init ();	// Инициализация дисплея 
    return;
}

void newGame();


void main (void)
{
	unsigned int i,j;
	unsigned char scan;	
	unsigned char userSelect;
	
	OSCCON = 0b01110010;
	OSCTUNE = 0b01000000;
	ADCON1 = 0b00001111;
    Init();
	menuHandler();
	newGame();
	while (1)
	{
		if(isNeedToWriteTime)
		{
			isNeedToWriteTime = 0;
			printSeconds();
		}
		scan = ~BUTTONS_PORT & 0b00111111;
		if(gameStatus == 1)
		{
			Delay10KTCYx(500);
			userSelect = lossDialogHandler();
			switch(userSelect)
			{
				case 1: 
						menuHandler();
				case 0:
						newGame();
						break;
			}
			scan = 0;
		}
		if(gameStatus == 2)
		{
			Delay10KTCYx(500);
			userSelect = winDialogHandler();
			switch(userSelect)
			{
				case 1: 
						menuHandler();
				case 0:
						newGame();
						break;
			}
			scan = 0;
		}
		
		gameMoveHandler(scan);		
    }

}

void newGame()
{
	bombsCount = startBombsCount;
	gameStatus = iActive = jActive = flagsSet = cellsOpened = secondsFromStart = 0;
	fieldGeneration(bombsCount);
	printBombsStatus();
	printNormalSmile();
	printTimeLabel();
	printSeconds();
	T0CONbits.TMR0ON = 1; // Запуск таймера-сч?тчика Timer0
	printField();
}