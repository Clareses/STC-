#ifndef __HEADFILE_H_
#define __HEADFILE_H_




#include <string.h>
#include <stdio.h>
//------STC16F SDK��
#include "STC16Fxx.h"
#include "board.h"
#include "common.h"

#include "zf_uart.h"
#include "zf_gpio.h"
#include "zf_iic.h"
#include "zf_adc.h"
#include "zf_spi.h"
#include "zf_tim.h"
#include "zf_pwm.h"
#include "zf_nvic.h"
#include "zf_exti.h"
#include "zf_delay.h"

#include "SEEKFREE_FONT.h"
#include "SEEKFREE_18TFT.h"
#include "SEEKFREE_IIC.h"
#include "SEEKFREE_ICM20602.h"
#include "SEEKFREE_TSL1401.h"
#include "SEEKFREE_IPS114_SPI.h"
#include "SEEKFREE_MPU6050.h"
#include "SEEKFREE_OLED.h"
#include "SEEKFREE_ABSOLUTE_ENCODER.h"
#include "SEEKFREE_WIRELESS.h"
#include "SEEKFREE_PRINTF.h"
#include "SEEKFREE_AT24C02.h"
#include "SEEKFREE_BLUETOOTH_CH9141.h"

//自己的头文件
#include "MyControlSys.h"
#include "MySteeringControl.h"
#include "MySteeringPIDAdapter.h"
#include "MyStepMotorControl.h"
#include "MyStepMotorPIDAdapter.h"
#include "isr.h"
#include "LCD_ALGORITHM.h"

#endif