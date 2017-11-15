#ifndef __USER_INERFACE_H
#define __USER_INERFACE_H

#define MENU_ITEMS_COUNT 2
#define WIN_DIALOG_ITEMS_COUNT 2
#define LOSS_DIALOG_ITEMS_COUNT 2
#define X_SMILE_COORD 110
#define Y_SMILE_COORD 10

void printMenu(unsigned char selected);

void printNormalSmile();

void printWowSmile();

void printDeadSmile();

void menuHandler();

void printWinDialog(unsigned char selected);

/* returns 0 if user want play again
*  returns 1 if user wants go to menu
*/
unsigned char winDialogHandler();

void printLossDialog(unsigned char selected);

/* returns 0 if user want play again
*  returns 1 if user wants go to menu
*/


#endif
