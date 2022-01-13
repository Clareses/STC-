/*
 * @Description  : 电磁传感器实现
 * @Author       : FZU Liao
 * @Date         : 2022-01-03 15:31:32
 * @LastEditors  : Liao
 * @LastEditTime : 2022-01-12 14:45:45
 * @FilePath     : \Driver\EM_SENSOR.c
 * Copyright 2022 FZU Liao, All Rights Reserved. 
 */
#include "EM_SENSOR.h"
#include "zf_adc.h"

void EM_INIT_SENSOR(){
    adc_init(ADC_P00,ADC_SYSclk_DIV_10);
    adc_init(ADC_P01,ADC_SYSclk_DIV_10);
    adc_init(ADC_P05,ADC_SYSclk_DIV_10);
    adc_init(ADC_P06,ADC_SYSclk_DIV_10);
}

void EM_READ_SENSOR(int* DATA_LIST){
    DATA_LIST[0] = adc_once(ADC_P00,ADC_12BIT);
    DATA_LIST[1] = adc_once(ADC_P01,ADC_12BIT);
    DATA_LIST[2] = adc_once(ADC_P05,ADC_12BIT);
    DATA_LIST[3] = adc_once(ADC_P06,ADC_12BIT);
}
