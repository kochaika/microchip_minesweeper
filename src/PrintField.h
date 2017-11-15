#ifndef __PRINTFIELD_H
#define __PRINTFIELD_H

void printField();

void printCell(unsigned int i, unsigned int j);

void inverse(const far rom char *sourse, char *dest);

void printNormalBomb(unsigned int i, unsigned int j);

void openAllBombs();

void printBombsStatus();

void printSeconds();

void printTimeLabel();

void DecToChar (char *Txt, unsigned long Value, unsigned char Ind, unsigned char DigitNum);

#endif