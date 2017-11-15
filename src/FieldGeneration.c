#include "Definitions.h"

void fieldGeneration(unsigned char countOfBombs)
{
	unsigned char i, j;
	for(i=0; i<FIELD_SIZE_Y; i++) //Filling array with zeros
		for(j=0; j<FIELD_SIZE_X; j++)
			field[i][j]=0;
	//Placing the bombs
	placingBombs(countOfBombs);
}

void placingBombs(unsigned char countOfBombs)
{
	unsigned char iBomb, jBomb;
	while(countOfBombs)
		{
			iBomb = (rand() >> 11)%FIELD_SIZE_Y;
			jBomb = (rand() >> 11)%FIELD_SIZE_X;
			if(!(field[iBomb][jBomb] & 0x08)) //if cell without bomb
				{ //place the bomb
					//if(howMuchBombs(iBomb, jBomb)>5)continue; //too much bombs near here
					putBomb(iBomb, jBomb);
					countOfBombs--;
				}
		}
}

void putBomb(unsigned char iPut, unsigned char jPut)
{
	unsigned char i;
	if(!iPut)
		i = 0;
	else
		i = iPut - 1;
	
	field[iPut][jPut] |= 0x08;

	for(; i<=iPut+1 && i<FIELD_SIZE_Y; i++)
	{
		unsigned char j;
		if(!jPut)
			j = 0;
		else
			j = jPut - 1;
		for(; j<=jPut+1 && j<FIELD_SIZE_X; j++)
			field[i][j]++;
	}
	
}

unsigned char howMuchBombs(unsigned char iFind, unsigned char jFind)
{
	unsigned char max = 0;
	unsigned char i;
	if(!iFind)
		i = 0;
	else
		i = iFind - 1;
	for(; i<=iFind+1 && i<FIELD_SIZE_Y; i++)
	{
		unsigned char j;
		if(!jFind)
			j = 0;
		else
			j = jFind - 1;
		if(!j)j++;
		for(; j<=jFind+1 && j<FIELD_SIZE_X; j++)
			if(field[i][j]>max)max = field[i][j];
	}
	return max;
}
