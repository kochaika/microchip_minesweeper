#ifndef __GAME_CORE_H
#define __GAME_CORE_H
	
// Ячейка - 0b0pxyzqqq, где
// x - открытая/закрытая клетка (1 - открытая) 
// y - стоит ли флаг (1 - флаг)
// z - есть ли бомба (1 - бомба)
// qqq - цифра, стоящая в клетке (в двоичной)
// p - следует открыть на следующей итерации (1 если следует)

void openCellsAround();

void markToOpenNearestSells(unsigned char iCell, unsigned char jCell);

unsigned char isValidSell(signed char i, signed char j);

void loss();

void win();

#endif