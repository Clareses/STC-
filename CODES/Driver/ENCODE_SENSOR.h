/*
 * @Description  : 编码器测速封装
 * @Author       : FZU Liao
 * @Date         : 2022-01-03 12:31:22
 * @LastEditors  : Liao
 * @LastEditTime : 2022-01-12 14:51:44
 * @FilePath     : \Driver\ENCODE_SENSOR.h
 * Copyright 2022 FZU Liao, All Rights Reserved. 
 */

#ifndef __ENCODING_H__
#define __ENCODING_H__

#include "zf_tim.h"

typedef enum{
    TIMER0_P34 = TIM_0,
    TIMER1_P35 = TIM_1,
    TIMER2_P54 = TIM_2,
    TIMER3_P04 = TIM_3,
    TIMER4_P06 = TIM_4
}ENCODING_OUTPUT_enum;


/**
 * @description: 初始化ENCODING所使用的计数器与输出引脚(见引脚图,一个TIMER有一个对应的输入引脚)
 * @param TIMERx_Pxx ENCODING_OUTPUT_enum 选择初始化某一个引脚作为编码器输入
 * @return NULL
 * @example: NULL
 */
void ENCODING_INIT(ENCODING_OUTPUT_enum TIMERx_Pxx);

/**
 * @description: 读取结果结构体
 * @param TIMERx_Pxx ENCODING_OUTPUT_enum 输入引脚
 * @return RESULT uint32
 * @example: 
 */
uint16 ENCODING_READ_RESULT(ENCODING_OUTPUT_enum TIMERx_Pxx);


#endif