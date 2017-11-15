#include "Definitions.h"

void openCellsAround()
{
	unsigned char toOpen, i, j;
	if(field[iActive][jActive] & 0x20) return; //если уже открыта
	field[iActive][jActive] |= 0x20; //открыть
	printCell(iActive,jActive);
	cellsOpened++;
	if(field[iActive][jActive] & 0x10)
	{
		flagsSet--;
		printBombsStatus();
	}
	if(field[iActive][jActive] & 0b00000111)//если цифра
	{		
		printCell(iActive,jActive);
		return;
	}
	markToOpenNearestSells(iActive,jActive);
	
	do
	{
		toOpen = 0;
		for(i=0;i<FIELD_SIZE_Y;i++)
			for(j=0;j<FIELD_SIZE_X;j++)
				if(field[i][j] & 0x40) //если помечена к открытию
				{
					toOpen++;
					field[i][j] |= 0x20;
					cellsOpened++;
					printCell(i,j);
					field[i][j] &= ~0x40;
					if(!(field[i][j] & 0x07)) //если пусто
						markToOpenNearestSells(i,j);
				}
		
	}while(toOpen);
	
}

void markToOpenNearestSells(unsigned char iCell, unsigned char jCell)
{
signed char i, j;
signed char iCellNew = iCell, jCellNew = jCell;

	for(i = iCellNew-1; i<= iCellNew+1; i++)
		for(j = jCellNew-1; j<=jCellNew+1; j++)
			if(isValidSell(i,j))
				if(!(field[i][j] & 0x20) && !(field[i][j] & 0x10))
					field[i][j] |= 0x40;
	
}

unsigned char isValidSell(signed char i, signed char j)
{
	if((i >= 0) && (i < FIELD_SIZE_Y) && (j >= 0) && (j < FIELD_SIZE_X)) return 1;
	else return 0;
}

void loss()
{
	gameStatus = 1;
	field[iActive][jActive] |= 0x20;
	printCell(iActive,jActive);
	printDeadSmile();
	openAllBombs();
}

void win()
{
	gameStatus = 2;
	field[iActive][jActive] |= 0x20;
	printCell(iActive,jActive);
	printHappySmile();
	openAllBombs();
}