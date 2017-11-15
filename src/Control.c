#include "Definitions.h"

unsigned char moveLeft()
{
	unsigned char jOld;
	if(jActive == 0) return 1;
	printWowSmile();
	jOld = jActive--;
	printCell(iActive,jOld);
	printCell(iActive,jActive);
	printNormalSmile();
	return 0;
}

unsigned char moveRight()
{
	unsigned char jOld;
	if(jActive == FIELD_SIZE_X-1) return 1;
	printWowSmile();
	jOld = jActive++;
	printCell(iActive,jOld);
	printCell(iActive,jActive);
	printNormalSmile();
	return 0;
}

unsigned char moveUp()
{
	unsigned char iOld;
	if(iActive == 0) return 1;
	printWowSmile();
	iOld = iActive--;
	printCell(iOld,jActive);
	printCell(iActive,jActive);
	printNormalSmile();
	return 0;
}

unsigned char moveDown()
{
	unsigned char iOld;
	if(iActive == FIELD_SIZE_Y-1) return 1;
	printWowSmile();
	iOld = iActive++;
	printCell(iOld,jActive);
	printCell(iActive,jActive);
	printNormalSmile();
	return 0;
}

unsigned char openCell()
{
	if(field[iActive][jActive] & 0x08)
	{
		loss();
		return 0;
	}
	if(field[iActive][jActive] & 0x20)return 1;
	printWowSmile();
	openCellsAround();
	printNormalSmile();
	if( FIELD_SIZE_X*FIELD_SIZE_Y - bombsCount == cellsOpened )
	{
		win();
	}
	return 0;
}

unsigned char setFlag()
{
	if(field[iActive][jActive] & 0x20)return 1;
	if(field[iActive][jActive] & 0x10) 
	{
		field[iActive][jActive] &= ~0x10;
		flagsSet--;
	}
	else
	{
		field[iActive][jActive] |= 0x10;
		flagsSet++;
	}
	printWowSmile();
	printBombsStatus();
	printCell(iActive,jActive);
	printNormalSmile();
	return 0;
}

void gameMoveHandler(unsigned char scan)
{
	if(scan & 0b00000010)
		{
			Delay10KTCYx (KEY_DELAY);
			moveLeft();
		}
	if(scan & 0b00100000)
		{
			Delay10KTCYx (KEY_DELAY);
			moveRight();
		}
	if(scan & 0b00010000)
		{
			Delay10KTCYx (KEY_DELAY);
			moveDown();
		}
	if(scan & 0b00000100)
		{
			Delay10KTCYx (KEY_DELAY);
			moveUp();
		}
	if(scan & 0b00001000)
		{
			Delay10KTCYx (KEY_DELAY);
			openCell();
		}		
	if(scan & 0b00000001)
		{
			Delay10KTCYx (KEY_DELAY);
			setFlag();
		}	
}

/* returns 0 if user want play again
*  returns 1 if user wants go to menu
*/
unsigned char lossDialogHandler()
{
	unsigned char menuItemSelected = 0;
	unsigned char scan;	
	printLossDialog(menuItemSelected);
	while (1)
	{
		scan = ~BUTTONS_PORT & 0b00111111;

		if(scan & 0b00010000) //Down
		{
			if(menuItemSelected < LOSS_DIALOG_ITEMS_COUNT-1)
				menuItemSelected++;
			Delay10KTCYx (KEY_DELAY);
			printLossDialog(menuItemSelected);
		}
		if(scan & 0b00000100) //Up
		{
			if(menuItemSelected > 0)
				menuItemSelected--;
			Delay10KTCYx (KEY_DELAY);
			printLossDialog(menuItemSelected);
		}
		if(scan & 0b00001000) //Center
		{
			return menuItemSelected;
		}		
	
    }	
}

unsigned char winDialogHandler()
{
	unsigned char menuItemSelected = 0;
	unsigned char scan;	
	printWinDialog(menuItemSelected);
	while (1)
	{
		scan = ~BUTTONS_PORT & 0b00111111;
		if(scan & 0b00010000) //Down
		{
			if(menuItemSelected < WIN_DIALOG_ITEMS_COUNT-1)
				menuItemSelected++;
			Delay10KTCYx (KEY_DELAY);
			printWinDialog(menuItemSelected);
		}
		if(scan & 0b00000100) //Up
		{
			if(menuItemSelected > 0)
				menuItemSelected--;
			Delay10KTCYx (KEY_DELAY);
			printWinDialog(menuItemSelected);
		}
		if(scan & 0b00001000) //Center
		{
			return menuItemSelected;
		}		
	
    }	
}

void menuHandler()
{
	unsigned char menuItemSelected = 0;
	unsigned char scan;	
	printMenu(menuItemSelected);
	while (1)
	{
		scan = ~BUTTONS_PORT & 0b00111111;
		if(scan & 0b00000100) //Up
		{
			if(menuItemSelected > 0)
				menuItemSelected--;
			Delay10KTCYx (KEY_DELAY);
			printMenu(menuItemSelected);	
		}
		if(scan & 0b00010000) //Down
		{
			if(menuItemSelected < MENU_ITEMS_COUNT-1)
				menuItemSelected++;
			Delay10KTCYx (KEY_DELAY);
			printMenu(menuItemSelected);
		}
		if(scan & 0b00000010) //Left
		{
			if(!menuItemSelected)
				continue;
			if(startBombsCount > MIN_BOMBS_LIMIT)
				startBombsCount--;
			Delay10KTCYx (KEY_DELAY);
			printMenu(menuItemSelected);
		}
		if(scan & 0b00100000) //Right
		{
			if(!menuItemSelected)
				continue;			
			if(startBombsCount < MAX_BOMBS_LIMIT)
				startBombsCount++;
			Delay10KTCYx (KEY_DELAY);
			printMenu(menuItemSelected);
		}
		if(scan & 0b00001000) //Center
		{
			if(!menuItemSelected)
				break;
		}		
	
    }
}

