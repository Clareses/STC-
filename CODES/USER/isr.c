#include "isr.h"

struct FUNC_CONTAINER{
    void (*func)();
};

struct FUNC_CONTAINER FUNC_LIST[27];

void ISR_INIT(){
    int i;
    for(i=0;i<27;i++){
        FUNC_LIST[i].func=0;
    }
}

void SET_ISR_FUNC(ISR_TYPE Isr,void (*func)()){
    FUNC_LIST[Isr].func = func;
}

void  INT0_Isr()  interrupt 0{
    if(FUNC_LIST[0].func!=0)
        (*FUNC_LIST[0].func)();
}
void  TM0_Isr()   interrupt 1{
    if(FUNC_LIST[1].func!=0)
        (*FUNC_LIST[1].func)();
}
void  INT1_Isr()  interrupt 2{
    if(FUNC_LIST[2].func!=0)
        (*FUNC_LIST[2].func)();
}
void  TM1_Isr()   interrupt 3{
    if(FUNC_LIST[3].func!=0)
        (*FUNC_LIST[3].func)();
}
void  UART1_Isr() interrupt 4{
    if(FUNC_LIST[4].func!=0)
        (*FUNC_LIST[4].func)();
}
void  ADC_Isr()   interrupt 5{
    if(FUNC_LIST[5].func!=0)
        (*FUNC_LIST[5].func)();
}
void  LVD_Isr()   interrupt 6{
    if(FUNC_LIST[6].func!=0)
        (*FUNC_LIST[6].func)();
}
void  PCA_Isr()   interrupt 7{
    if(FUNC_LIST[7].func!=0)
        (*FUNC_LIST[7].func)();
}
void  UART2_Isr() interrupt 8{
    if(FUNC_LIST[8].func!=0)
        (*FUNC_LIST[8].func)();
}
void  SPI_Isr()   interrupt 9{
    if(FUNC_LIST[9].func!=0)
        (*FUNC_LIST[9].func)();
}
void  INT2_Isr()  interrupt 10{
    if(FUNC_LIST[10].func!=0)
        (*FUNC_LIST[10].func)();
}
void  INT3_Isr()  interrupt 11{
    if(FUNC_LIST[11].func!=0)
        (*FUNC_LIST[11].func)();
}
void  TM2_Isr()   interrupt 12{
    if(FUNC_LIST[12].func!=0)
        (*FUNC_LIST[12].func)();
}
void  INT4_Isr()  interrupt 16{
    if(FUNC_LIST[16].func!=0)
        (*FUNC_LIST[16].func)();
}
void  UART3_Isr() interrupt 17{
    if(FUNC_LIST[17].func!=0)
        (*FUNC_LIST[17].func)();
}
void  UART4_Isr() interrupt 18{
    if(FUNC_LIST[18].func!=0)
        (*FUNC_LIST[18].func)();
}
void  TM3_Isr()   interrupt 19{
    if(FUNC_LIST[19].func!=0)
        (*FUNC_LIST[19].func)();
}
void  TM4_Isr()   interrupt 20{
    if(FUNC_LIST[20].func!=0)
        (*FUNC_LIST[20].func)();
}
void  CMP_Isr()   interrupt 21{
    if(FUNC_LIST[21].func!=0)
        (*FUNC_LIST[21].func)();
}
void  I2C_Isr()   interrupt 24{
    if(FUNC_LIST[24].func!=0)
        (*FUNC_LIST[24].func)();
}
void  USB_Isr()   interrupt 25{
    if(FUNC_LIST[25].func!=0)
        (*FUNC_LIST[25].func)();
}
void  PWM1_Isr()  interrupt 26{
    if(FUNC_LIST[26].func!=0)
        (*FUNC_LIST[26].func)();
}
void  PWM2_Isr()  interrupt 27{
    if(FUNC_LIST[27].func!=0)
        (*FUNC_LIST[27].func)();
}