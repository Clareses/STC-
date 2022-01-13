/*
 * @Description  : 电磁传感器封装
 * @Author       : FZU Liao
 * @Date         : 2022-01-03 15:31:16
 * @LastEditors  : Liao
 * @LastEditTime : 2022-01-12 14:45:52
 * @FilePath     : \Driver\EM_SENSOR.h
 * Copyright 2022 FZU Liao, All Rights Reserved. 
 */
#ifndef __EM_SENSOR_H__
#define __EM_SENSOR_H__

/**
 * @description: 电磁传感器初始化
 * @param *
 * @return *
 * @example: 
 */
void EM_INIT_SENSOR();

/**
 * @description: 电磁传感器更新数据列表
 * @param DATA_LIST int* 数据列表
 * @return *
 * @example: 
 */
void EM_READ_SENSOR(int* DATA_LIST);

#endif