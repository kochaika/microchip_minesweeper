#ifndef __CONTROL_H
#define __CONTROL_H

unsigned char moveLeft(void);

unsigned char moveRight(void);

unsigned char moveUp(void);

unsigned char moveDown(void);

unsigned char openCell(void);

unsigned char setFlag(void);

void gameMoveHandler(unsigned char scan);

unsigned char lossDialogHandler(void);

unsigned char winDialogHandler(void);

void menuHandler(void);

#endif
