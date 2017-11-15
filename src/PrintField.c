#include "Definitions.h"
#include "MinerGraphics.h"

void printField()
{
    unsigned int i, j;
	for (i=0; i<FIELD_SIZE_Y; i++)
	{
		for (j=0; j<FIELD_SIZE_X; j++)
		{
			printCell(i,j);
		}	
	}
}

void inverse(const far rom char *sourse, char *dest)
{
	int i;
	dest[0] = sourse[0];
	dest[1] = sourse[1];
	dest[2] = sourse[2];
	dest[3] = sourse[3];	
	for(i=4;i<515;i++)
		dest[i] = ~sourse[i];
}

void printCell(unsigned int i, unsigned int j)
{
	const far rom unsigned char *PicPtr;
	//===========================
			//Принудительное открытие
			//field[i][j] |= 0x20;
			//===========================
			
			if(field[i][j] & 0x20) //если открытая
			{
				if(field[i][j] & 0x08) //если бомба 0x08 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
				{
					PicPtr = BombFlashImg;
				}
				else //тогда цифра
				{
					switch (field[i][j] & 0x07)
					{
						case 0: PicPtr = EmptyImg; break;
						case 1: PicPtr = Open1Img; break;
						case 2: PicPtr = Open2Img; break;
						case 3: PicPtr = Open3Img; break;
						case 4: PicPtr = Open4Img; break;
						case 5: PicPtr = Open5Img; break;
					}
				}
			}
			else //тогда закрытая
			{
				if(field[i][j] & 0x10) //если установлен флаг
				{
					PicPtr = FlagImg;
				}
				else
				{
					PicPtr = CloseImg;
				}
			}
			
			Disp_Pic (PicPtr, X_BOARD + j*16, Y_BOARD + i*16);
			
			if(i==iActive && j==jActive)
				{
					//char inversed[516];
					//inverse(PicPtr, inversed);
					Disp_Line ( X_BOARD + j*16,  Y_BOARD + i*16, X_BOARD + j*16,  Y_BOARD + (i+1)*16-1, 0b1111100000000000);
					Disp_Line ( X_BOARD + j*16,  Y_BOARD + i*16, X_BOARD + (j+1)*16-1,  Y_BOARD + i*16, 0b1111100000000000);
					Disp_Line ( X_BOARD + (j+1)*16-1,  Y_BOARD + i*16, X_BOARD + (j+1)*16-1, Y_BOARD + (i+1)*16-1, 0b1111100000000000);
					Disp_Line ( X_BOARD + j*16,  Y_BOARD + (i+1)*16-1, X_BOARD + (j+1)*16-1,  Y_BOARD + (i+1)*16-1, 0b1111100000000000);
					//Disp_Pic_RAM (inversed, j*16, i*16);
				}

}

void openAllBombs()
{
    unsigned int i, j;
	for (i=0; i<FIELD_SIZE_Y; i++)
	{
		for (j=0; j<FIELD_SIZE_X; j++)
		{
			if( (field[i][j] & 0x28) == 0x08)
			{
				printNormalBomb(i,j);
			}
		}	
	}	
}

void printNormalBomb(unsigned int i, unsigned int j)
{
	Disp_Pic (BombImg, X_BOARD + j*16, Y_BOARD + i*16);
}

void printBombsStatus()
{
	char message[] = "Бомб:    \0";
	char eraser[] =  "         \0";
	Disp_Text (0, 0, eraser, 0b0000000000000000, 0b1111111111111111);
	DecToChar(message, bombsCount - (signed char)flagsSet, 6, 2);
	Disp_Text (0, 0, message, 0b0000000000000000, 0b1111111111111111);
}

void printTimeLabel() 
{
	char message[] = "Время:     \0"; //+7
	Disp_Text (150, 0, message, 0b0000000000000000, 0b1111111111111111);
}
void printSeconds()
{
	char time[] =  "   \0";
	DecToChar(time, secondsFromStart, 0, 3);
	Disp_Text (206, 0, time, 0b0000000000000000, 0b1111111111111111);
}

void DecToChar (char *Txt, unsigned long Value, unsigned char Ind, unsigned char DigitNum)
{
    Ind += DigitNum - 1;

    while (DigitNum--)
    {
        Txt[Ind--] = (unsigned long) Value % 10 + '0';
        Value /= (unsigned long) 10;
    }
}
