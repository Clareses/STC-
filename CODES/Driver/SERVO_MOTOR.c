/*
 * @Description  : 伺服电机控制实现
 * @Author       : FZU Liao
 * @Date         : 2022-01-03 14:35:08
 * @LastEditors  : Liao
 * @LastEditTime : 2022-01-12 14:54:47
 * @FilePath     : \Driver\SERVO_MOTOR.c
 * Copyright 2022 FZU Liao, All Rights Reserved. 
 */

#include "SERVO_MOTOR.h"
#include "zf_delay.h"
#include "zf_pwm.h"

#define SERVO_OUTPUT PWMB_CH1_P74

#define MAX_ANGLE 10

void SERVO_INIT_MOTOR(){
    pwm_init(SERVO_OUTPUT,50,760);
}

void SERVO_SET_ANGLE(int Angle){
    uint16 DUTY;
    if(Angle>MAX_ANGLE) Angle = MAX_ANGLE;
    if(Angle<-MAX_ANGLE) Angle = -MAX_ANGLE;
    DUTY = (Angle*30);
    pwm_duty(SERVO_OUTPUT,760+DUTY);
    delay_ms(30);
}