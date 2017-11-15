#ifndef __MINER_GRAPH_H
#define __MINER_GRAPH_H


const far rom unsigned char FlagImg[516] = {
0x00,0x10,0x00,0x10,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X18,0XC6,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0XF8,
0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0XF8,
0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0X18,0XC6,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X18,0XC6,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
};

const far rom unsigned char CloseImg[516] = {
0x00,0x10,0x00,0x10,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X18,0XC6,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0XFF,0XFF,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X84,0X10,0X84,
0XFF,0XFF,0X18,0XC6,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X18,0XC6,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
};

const far rom unsigned char EmptyImg[516] = {
0x00,0x10,0x00,0x10,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
};

const far rom unsigned char Open1Img[516] = {
0x00,0x10,0x00,0x10,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X1F,0X00,0X1F,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X1F,0X00,
0X1F,0X00,0X1F,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X1F,0X00,0X1F,0X00,
0X1F,0X00,0X1F,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X1F,0X00,0X1F,0X00,0X1F,0X00,
0X1F,0X00,0X1F,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X1F,0X00,
0X1F,0X00,0X1F,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X1F,0X00,
0X1F,0X00,0X1F,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X1F,0X00,
0X1F,0X00,0X1F,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X1F,0X00,
0X1F,0X00,0X1F,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X1F,0X00,0X1F,0X00,0X1F,0X00,
0X1F,0X00,0X1F,0X00,0X1F,0X00,0X1F,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X1F,0X00,0X1F,0X00,0X1F,0X00,
0X1F,0X00,0X1F,0X00,0X1F,0X00,0X1F,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
};

const far rom unsigned char Open2Img[516] = {
0x00,0x10,0x00,0x10,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,
0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,
0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X04,0X00,0X04,0X00,0X04,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X00,0X04,0X00,0X04,0X00,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X00,0X04,0X00,0X04,0X00,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0X04,0X00,0X04,
0X00,0X04,0X00,0X04,0X00,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,
0X00,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,
0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,
0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,0X00,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
};

const far rom unsigned char Open3Img[516] = {
0x00,0x10,0x00,0x10,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
};

const far rom unsigned char Open4Img[516] = {
0x00,0x10,0x00,0x10,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,
0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,
0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,0X18,0XC6,
0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,0X18,0XC6,
0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,0X10,0X00,0X10,0X00,
0X10,0X00,0X10,0X00,0X10,0X00,0X10,0X00,0X10,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,0X10,0X00,0X10,0X00,
0X10,0X00,0X10,0X00,0X10,0X00,0X10,0X00,0X10,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X10,0X00,0X10,0X00,0X10,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
};

const far rom unsigned char Open5Img[516] = {
0x00,0x10,0x00,0x10,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,
0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,
0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X80,0X00,0X80,0X00,0X80,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X80,0X00,0X80,0X00,0X80,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,
0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,
0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X00,0X80,0X00,0X80,0X00,0X80,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X00,0X80,0X00,0X80,0X00,0X80,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,
0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,
0X00,0X80,0X00,0X80,0X00,0X80,0X00,0X80,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
};

const far rom unsigned char Open6Img[516] = {
0x00,0x10,0x00,0x10,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,
0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,
0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X10,0X04,0X10,0X04,0X10,0X04,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X10,0X04,0X10,0X04,0X10,0X04,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,
0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,
0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X10,0X04,0X10,0X04,0X10,0X04,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X10,0X04,0X10,0X04,0X10,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X10,0X04,0X10,0X04,0X10,0X04,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X10,0X04,0X10,0X04,0X10,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,
0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,
0X10,0X04,0X10,0X04,0X10,0X04,0X10,0X04,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
};

const far rom unsigned char BombImg[516] = {
0x00,0x10,0x00,0x10,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0X00,0X18,0XC6,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X18,0XC6,0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X00,0X00,0X18,0XC6,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X18,0XC6,0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X00,0X00,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X10,0X84,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,0X18,0XC6,
};

const far rom unsigned char BombFlashImg[516] = {
0x00,0x10,0x00,0x10,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,0X10,0X84,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0X00,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0X00,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0X00,0X00,0XF8,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF8,0X00,0X00,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0X00,0X00,0XF8,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF8,0X00,0X00,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0X00,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0X00,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X10,0X84,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,0X00,0XF8,
};


#endif