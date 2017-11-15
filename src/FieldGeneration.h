#ifndef __FIELD_GENERATION_H
#define __FIELD_GENERATION_H

	
// Ячейка - 0b0pxyzqqq, где
// x - открытая/закрытая клетка (1 - открытая) 
// y - стоит ли флаг (1 - флаг)
// z - есть ли бомба (1 - бомба)
// qqq - цифра, стоящая в клетке (в двоичной)
// p - следует открыть на следующей итерации (1 если следует)

/**
* Clearing field and generates the new field of play, setting all cells closed, 
* placing bombs and placing the numbers according to the number of bombs around.
* @param countOfBombs Number of bombs, which is required to place
*/
void fieldGeneration(unsigned char countOfBombs);

/**
 * Placing bomb in the field and placing numbers of bombs in the nearest to bomb cells
 */
void placingBombs(unsigned char countOfBombs);

/**
 *	Puts a bomb in the specified cell and inc count of bombs around
 * @param iPut Cell line in which it is necessary to place a bomb
 * @param jPut Cell column in which it is necessary to place a bomb
 */
void putBomb(unsigned char iPut, unsigned char jPut);

/**
 * Find the largest number of bombs around the specified cell.
 * Lets find out the maximum number of bombs in the cells around.
 * @param iFind Cell line around which is searched
 * @param jFind Cell column around which is searched
 * @return 
 */
unsigned char howMuchBombs(unsigned char iFind, unsigned char jFind);

#endif
