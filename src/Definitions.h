#ifndef __DEFINITIONS_H
#define __DEFINITIONS_H

#include <p18f4520.h>
#include <delays.h>   
#include <timers.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "LCD.h"
#include "PrintField.h"
#include "FieldGeneration.h"
#include "EEPROM.h"
#include "Control.h"
#include "GameCore.h"
#include "PrintSmile.h"
#include "UserInterface.h"

#define EEPROM_ADDR     0
#define KEY_DELAY     	30
#define FIELD_SIZE_X   	12
#define FIELD_SIZE_Y   	16
#define MIN_BOMBS_LIMIT 10
#define MAX_BOMBS_LIMIT 30
#define X_BOARD         24      // Отступ от края по Х
#define Y_BOARD         48      // Отступ от края по Y
#define BUTTONS_PORT 	PORTB

extern unsigned char field[FIELD_SIZE_X][FIELD_SIZE_Y];
extern unsigned char iActive, jActive;
extern unsigned char flagsSet;
extern unsigned char cellsOpened;
extern unsigned char bombsCount;
extern unsigned char startBombsCount;
extern volatile unsigned int secondsFromStart;
extern volatile char isNeedToWriteTime;


/**
* Status of current game
* 0 - Game 
* 1 - Loss
* 2 - Win
*/
extern unsigned char gameStatus;
#endif