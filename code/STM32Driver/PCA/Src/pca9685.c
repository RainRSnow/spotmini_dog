/*
 * pca9685.c
 *
 *  Created on: Jan 9, 2020
 *      Author: Sunshine
 */
#include "pca9685.h"

void pca9685_writerreg(uint8_t pca9685_addr, uint8_t reg_addr, uint8_t *data)
{
	HAL_I2C_Mem_Write(&hi2c1, pca9685_addr, reg_addr,8,&data,1,5);
}
uint8_t pca9685_readreg(uint8_t pca9685_addr, uint8_t reg_addr)
{
	uint8_t *data;
	HAL_I2C_Mem_Read(&hi2c1, pca9685_addr, reg_addr,8,&data,1,5);
	return *data;
}

