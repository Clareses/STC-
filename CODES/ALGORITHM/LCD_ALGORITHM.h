#ifndef __LCD_ALGORITHM__
#define __LCD_ALGORITHM__

#include "COMMON.h"

void LCD_INITIAL();
void LCD_CLEAN();
void LCD_DISPLAY_INT(int x,int y,int NUM);
//void LCD_DISPLAY_FLOAT(int x,int y,float NUM);
void LCD_DISPLAY_STRING(int x,int y,const char* STR);

#endif