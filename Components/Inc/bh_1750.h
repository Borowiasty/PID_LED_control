/*
 * bh_1750.h
 *
 *  Created on: Jan 15, 2023
 *      Author: krza3
 */

#ifndef INC_BH_1750_H_
#define INC_BH_1750_H_

#include "stm32f7xx_hal.h"

#define BH1750_I2CType I2C_HandleTypeDef*

typedef struct {
  BH1750_I2CType I2C;
  uint8_t Address;
  uint32_t Timeout;
} BH1750_HandleTypeDef;

/* Define --------------------------------------------------------------------*/
#define BH1750_ADDRESS_L (0x23 << 1)     //! ADDR = 'L' @see BH1750 technical note p. 10
#define BH1750_ADDRESS_H (0x5C << 1)     //! ADDR = 'H' @see BH1750 technical note p. 10

#define BH1750_POWER_DOWN             0x00
#define BH1750_POWER_ON               0x01
#define BH1750_RESET                  0x07
#define BH1750_CONTINOUS_H_RES_MODE   0x10
#define BH1750_CONTINOUS_H_RES_MODE2  0x11
#define BH1750_CONTINOUS_L_RES_MODE   0x13
#define BH1750_ONE_TIME_H_RES_MODE    0x20
#define BH1750_ONE_TIME_H_RES_MODE2   0x21
#define BH1750_ONE_TIME_L_RES_MODE    0x23

#define BH1750_COMMAND_SIZE 1
#define BH1750_DATA_SIZE    2
#define BH1750_DATA_MSB     0
#define BH1750_DATA_LSB     1


void BH1750_Init(BH1750_HandleTypeDef* hbh1750);

float BH1750_ReadIlluminance_lux(BH1750_HandleTypeDef* hbh1750);

#endif /* INC_BH_1750_H_ */
