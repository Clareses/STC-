/*
 * @Description  : 编码器测速实现
 * @Author       : FZU Liao
 * @Date         : 2022-01-03 12:31:35
 * @LastEditors  : Liao
 * @LastEditTime : 2022-01-12 16:49:14
 * @FilePath     : \Driver\ENCODE_SENSOR.c
 * Copyright 2022 FZU Liao, All Rights Reserved. 
 */

#include "ENCODE_SENSOR.h"

void ENCODING_INIT(ENCODING_OUTPUT_enum TIMERx_Pxx){
    ctimer_count_init(TIMERx_Pxx);
    ctimer_count_clean(TIMERx_Pxx);
}

uint16 ENCODING_READ_RESULT(ENCODING_OUTPUT_enum TIMERx_Pxx){
    uint16 RESULT;
    RESULT = ctimer_count_read(TIMERx_Pxx);
    ctimer_count_clean(TIMERx_Pxx);
    return RESULT;
}
