#include "LCD_ALGORITHM.h"
#include "COMMON.h"
#include "SEEKFREE_18TFT.h"
#include "SEEKFREE_FONT.h"

void LCD_INITIAL() {
    lcd_init();
}
void LCD_CLEAN() {
    lcd_clear(WHITE);
}

int LCD_DISPLAY_uINT(int x, int y, int NUM) {
    int LENGTH, temp;
    temp = NUM;
    while (temp != 0) {
        temp = temp / 10;
        LENGTH++;
    }
    temp = LENGTH;
    while (LENGTH != 0) {
        lcd_showchar(x + LENGTH * 8, y, '0' + NUM % 10);
        LENGTH--;
        NUM /= 10;
    }
    return (temp + 1) * 8 + x;
}

int LCD_DISPLAY_uFLOAT(int x, int y, float NUM) {
    int int_NUM, float_NUM, point_pos;
    int_NUM = NUM * 100;
    float_NUM = int_NUM - int_NUM / 100 * 100;
    int_NUM /= 100;
    point_pos = LCD_DISPLAY_uINT(x, y, int_NUM);
    return LCD_DISPLAY_uINT(point_pos + 8, y, float_NUM);
}

void LCD_DISPLAY_INT(int x, int y, int NUM) {
    int sign_pos,temp;
    if(NUM == 0) return ;
    temp = NUM>0? NUM : -NUM;
    sign_pos = LCD_DISPLAY_uINT(x, y, temp);
    if (NUM >= 0) {
        lcd_showchar(sign_pos, y, '+');
    } else {
        lcd_showchar(sign_pos, y, '-');
    }
}

void LCD_DISPLAY_FLOAT(int x, int y, float NUM) {
    int sign_pos;
    float temp;
    temp = NUM>0? NUM : -NUM;
    sign_pos = LCD_DISPLAY_uFLOAT(x, y, temp);
    if (NUM >= 0) {
        lcd_showchar(sign_pos, y, '+');
    } else {
        lcd_showchar(sign_pos, y, '-');
    }
}

void LCD_DISPLAY_STRING(uint16 x, uint16 y, const int8 dat[]) {
    lcd_showstr(x, y, dat);
}