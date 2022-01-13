#ifndef __DEBUG__
#define __DEBUG__

// #include "headfile.h"

// int TARGET_SPEED = 1500;
// int CURRENT_PWM  = 1000;
// int CURRENT_SPEED;
// int deltaPWM;
// int ERROR_MAX = 0;

// void display(){
//     lcd_showstr(0,0,"Cur_V");
//     lcd_showint16(60,0,CURRENT_SPEED);
//     lcd_showstr(0,1,"ERROR");
//     lcd_showint16(60,1,TARGET_SPEED - CURRENT_SPEED);
//     lcd_showstr(0,2,"Delta_P");
//     lcd_showint16(60,2,deltaPWM);
//     lcd_showstr(0,3,"Cur_P");
//     lcd_showint16(60,3,CURRENT_PWM);
//     lcd_showstr(0,4,"MAX_ERR");
//     lcd_showint16(60,4,ERROR_MAX);
// }

// void RECORD(){
//     ERROR_MAX = 0;
// }

// void DEBUG_FUNC(){
//     CURRENT_SPEED = 0;
//     ENCODING_INIT(TIMER3_P04);
//     lcd_clear(GREEN);
//     delay_ms(1000);
//     lcd_clear(WHITE);
//     STEP_MOTOR_INIT();
//     pit_timer_ms(TIM_0,1000);
//     while(1){
//         display();
//         CURRENT_SPEED = ENCODING_READ_RESULT(CTIM3_P04);
//         deltaPWM = Calc_StepMotor_PWM(CURRENT_SPEED,TARGET_SPEED);
//         CURRENT_PWM = deltaPWM + CURRENT_PWM;
//         if(CURRENT_PWM < 0) CURRENT_PWM = 0;
//         if(CURRENT_PWM >4000) CURRENT_PWM = 4000;
//         if(CURRENT_SPEED-TARGET_SPEED>ERROR_MAX) ERROR_MAX = CURRENT_SPEED - TARGET_SPEED;
// 		STEP_MOTOR_FORWARD(CURRENT_PWM);
//         delay_ms(20);
//     }
// }

#endif