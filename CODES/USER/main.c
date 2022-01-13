#include "headfile.h"

void SYS_INIT_ALL() {
    sys_clk = 30000000;
    board_init();
    LCD_INITIAL();
    ISR_INIT();
    EnableGlobalIRQ();
}

int READ_DATA[4];

void display(){
    lcd_showstr(0,0,"L");
    lcd_showint16(60,0,READ_DATA[0]);
    lcd_showstr(0,1,"LM");
    lcd_showint16(60,1,READ_DATA[1]);
    lcd_showstr(0,2,"RM");
    lcd_showint16(60,2,READ_DATA[2]);
    lcd_showstr(0,3,"R");
    lcd_showint16(60,3,READ_DATA[3]);
    lcd_showstr(0,4,"div");
    lcd_showint16(60,4,(READ_DATA[0]*100-READ_DATA[3]*100)/(READ_DATA[0]*100+READ_DATA[3]*100));
}


void main() {
    SYS_INIT_ALL();
    while (1){
    }
}