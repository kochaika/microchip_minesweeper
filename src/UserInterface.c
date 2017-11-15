#include "Definitions.h"                // Подключение файла с определениями
#include "Smiles.h"

void printMenu(unsigned char selected)
{
	unsigned int black = 0b0000000000000000;
	unsigned int white = 0b1111111111111111;
	char blank[] 	= "             \0";
	char menu[] 	= "     Меню    \0";
	char begin[] 	= "    Начать   \0";
	char count[] 	= "Бомб: <    > \0";
	DecToChar(count, startBombsCount, 8, 2);
	count[10]=' ';
	Disp_Text (64, 60, blank, black, white);
	Disp_Text (64, 80, blank, black, white);
	Disp_Text (64, 50, menu, black, white);
	if(selected == 0)
		Disp_Text (64, 70, begin, white, black);
	else
		Disp_Text (64, 70, begin, black, white);
	if(selected == 1)
		Disp_Text (64, 90, count, white, black);
	else
		Disp_Text (64, 90, count, black, white);
}

void printWinDialog(unsigned char selected)
{
	char blank[] 	= "             \0";
	char win[] 	= "   Победа!   \0";
	char again[] 	= "Еще разок    \0";
	char menu[] 	= "Выйти в меню \0";
	unsigned int black = 0b0000000000000000;
	unsigned int white = 0b1111111111111111;
	Disp_Text (64, 60, blank, black, white);
	Disp_Text (64, 80, blank, black, white);
	Disp_Text (64, 50, win, black, white);
	if(selected == 0)
		Disp_Text (64, 70, again, white, black);
	else
		Disp_Text (64, 70, again, black, white);
	if(selected == 1)
		Disp_Text (64, 90, menu, white, black);
	else
		Disp_Text (64, 90, menu, black, white);
}

void printLossDialog(unsigned char selected)
{
	char blank[] 	= "             \0";
	char win[] 		= "    БАБАХ!   \0";
	char again[] 	= "Еще разок    \0";
	char menu[] 	= "Выйти в меню \0";
	unsigned int black = 0b0000000000000000;
	unsigned int white = 0b1111111111111111;
	Disp_Text (64, 60, blank, black, white);
	Disp_Text (64, 80, blank, black, white);
	Disp_Text (64, 50, win, black, white);
	if(selected == 0)
		Disp_Text (64, 70, again, white, black);
	else
		Disp_Text (64, 70, again, black, white);
	if(selected == 1)
		Disp_Text (64, 90, menu, white, black);
	else
		Disp_Text (64, 90, menu, black, white);
}

void printNormalSmile() //*_*
{
	Disp_Pic (Smile1Img, X_SMILE_COORD, Y_SMILE_COORD);
}

void printWowSmile() // 0_0
{
	Disp_Pic (Smile2Img, X_SMILE_COORD, Y_SMILE_COORD);
}

void printDeadSmile() //x_x
{
	Disp_Pic (Smile3Img, X_SMILE_COORD, Y_SMILE_COORD);
}

void printHappySmile() //^_^
{
	Disp_Pic (Smile4Img, X_SMILE_COORD, Y_SMILE_COORD);
}