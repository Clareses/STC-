#ifndef __ISR_H__
#define __ISR_H__

typedef enum{
    INT0_interrupt,
    TM0_interrupt,
    INT1_interrupt,
    TM1_interrupt,
    UART1_interrupt,
    ADC_interrupt,
    LVD_interrupt,
    PCA_interrupt,
    UART2_interrupt,
    SPI_interrupt,
    INT2_interrupt,
    INT3_interrupt,
    TM2_interrupt,
    INT4_interrupt,
    UART3_interrupt,
    UART4_interrupt,
    TM3_interrupt,
    TM4_interrupt,
    CMP_interrupt,
    I2C_interrupt,
    USB_interrupt,
    PWM1_interrupt,
    PWM2_interrupt
}ISR_TYPE;

void ISR_INIT();

void SET_ISR_FUNC(ISR_TYPE Isr,void (*func)());

#endif


//void  INT0_Isr()  interrupt 0;
//void  TM0_Isr()   interrupt 1;
//void  INT1_Isr()  interrupt 2;
//void  TM1_Isr()   interrupt 3;
//void  UART1_Isr() interrupt 4;
//void  ADC_Isr()   interrupt 5;
//void  LVD_Isr()   interrupt 6;
//void  PCA_Isr()   interrupt 7;
//void  UART2_Isr() interrupt 8;
//void  SPI_Isr()   interrupt 9;
//void  INT2_Isr()  interrupt 10;
//void  INT3_Isr()  interrupt 11;
//void  TM2_Isr()   interrupt 12;
//void  INT4_Isr()  interrupt 16;
//void  UART3_Isr() interrupt 17;
//void  UART4_Isr() interrupt 18;
//void  TM3_Isr()   interrupt 19;
//void  TM4_Isr()   interrupt 20;
//void  CMP_Isr()   interrupt 21;
//void  I2C_Isr()   interrupt 24;
//void  USB_Isr()   interrupt 25;
//void  PWM1_Isr()  interrupt 26;
//void  PWM2_Isr()  interrupt 27;