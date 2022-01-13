/*
 * @Description  : 步进电机控制封装
 * @Author       : FZU Liao
 * @Date         : 2022-01-03 15:48:15
 * @LastEditors  : Liao
 * @LastEditTime : 2022-01-11 16:58:43
 * @FilePath     : \TEMPLATE_PROJECT\CODES\DRIVER\STEP_MOTOR.h
 * Copyright 2022 FZU Liao, All Rights Reserved. 
 */

#ifndef __STEP_MOTOR_H__
#define __STEP_MOTOR_H__

#include "zf_pwm.h"

#define STEP_MOTOR_MAX_DUTY 5000

/**
 * @description: 初始化步进电机
 * @param MOTOR STEP_MOTOR 步进电机指针
 * @param ALI PWM_CHANNEL_enum PWM通道引脚
 * @param BLI PWM_CHANNEL_enum PWM通道引脚
 * @return NULL
 * @example:
 */
void STEP_MOTOR_INIT();

/**
 * @description: 控制前进供电
 * @param MOTOR STEP_MOTOR 电机指针
 * @return NULL
 * @example: 
 */
void STEP_MOTOR_FORWARD(int Duty);

/**
 * @description: 控制刹车
 * @param MOTOR STEP_MOTOR 电机指针
 * @return NULL
 * @example: 
 */
void STEP_MOTOR_STOP( );

/**
 * @description: 控制后退供电
 * @param MOTOR STEP_MOTOR 电机指针
 * @return NULL
 * @example: 
 */
void STEP_MOTOR_BACK(int Duty);

/**
 * @description: 读取电机占空比
 * @param MOTOR STEP_MOTOR*
 * @return *
 * @example: 
 */
uint32 STEP_MOTOR_GET_DUTY();

#endif