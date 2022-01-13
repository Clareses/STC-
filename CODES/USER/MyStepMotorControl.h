/*
 * @Description  : 步进电机控制
 * @Author       : FZU Liao
 * @Date         : 2022-01-06 16:57:24
 * @LastEditors  : Liao
 * @LastEditTime : 2022-01-12 22:24:07
 * @FilePath     : \USER\MyStepMotorControl.h
 * Copyright 2022 FZU Liao, All Rights Reserved. 
 */

#ifndef __MyStepMotorControl__
#define __MyStepMotorControl__

#include "HEADFILE.h"
#include "STEP_MOTOR.h"
#include "MyStepMotorPIDAdapter.h"

#define ERROR_RANGE 1

typedef enum{
    OFF,
    ON
}STATUS_FLAG;
STATUS_FLAG FLAG;

void MyStepMotor_INIT(){
    STEP_MOTOR_INIT();
    FLAG = OFF;
}

void StepMotor_Control(uint16 CURRENT_SPEED,uint16 TARGET_SPEED){
    //加上特判，如果当前值不止第一次为0（曾经有过速度，而又降为0），则停止所有输出（断电保护，怕烧电机）
    if(CURRENT_SPEED>0 && FLAG == OFF) FLAG = ON;
    if(CURRENT_SPEED == 0 && FLAG == ON){
        STEP_MOTOR_STOP();
        return;    
    }
    //加上特判，如果目标值为0，直接停止所有输出
    if(TARGET_SPEED == 0){
        STEP_MOTOR_STOP();
        return;
    }
    if(CURRENT_SPEED - TARGET_SPEED > ERROR_RANGE){
        //进行判断，差值是否处于预定范围内，如果超出太多，直接调用刹车函数
        STEP_MOTOR_STOP();
    }
    else if(TARGET_SPEED - CURRENT_SPEED > ERROR_RANGE){
        //判断是否处于预定范围内，如果距离目标速度太远，则直接最大功率输出
        STEP_MOTOR_FORWARD(STEP_MOTOR_MAX_DUTY);
    }else{
        //否则利用PID计算调控速度
        STEP_MOTOR_FORWARD(
            Calc_StepMotor_PWM(CURRENT_SPEED,TARGET_SPEED)
        );
    }
}

#endif