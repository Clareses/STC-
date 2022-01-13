/*
 * @Description  : 步进电机控制实现
 * @Author       : FZU Liao
 * @Date         : 2022-01-03 15:48:25
 * @LastEditors  : Liao
 * @LastEditTime : 2022-01-12 15:17:50
 * @FilePath     : \Driver\STEP_MOTOR.c
 * Copyright 2022 FZU Liao, All Rights Reserved. 
 */

#include "STEP_MOTOR.h"
#include "zf_delay.h"
#include "zf_gpio.h"

void STEP_MOTOR_INIT(){
    pwm_init(PWMA_CH1P_P60,12500,100);
    gpio_mode(P6_0,GPO_PP);
    gpio_mode(P6_4,GPO_PP);
    P64 = 0;
}

void STEP_MOTOR_FORWARD(int Duty ){
    P64 = 0;
    pwm_duty(PWMA_CH1P_P60,Duty);
}

void STEP_MOTOR_STOP( ){
    pwm_duty(PWMA_CH1P_P60,0);
}

void STEP_MOTOR_BACK(int Duty){
    P64 = 1;
    pwm_duty(PWMA_CH1P_P60,-Duty);
}

uint32 STEP_MOTOR_GET_DUTY( ){
    return 0;
}