/*
 * bh_1750_config.c
 *
 *  Created on: Jan 15, 2023
 *      Author: krza3
 */
#include "bh_1750.h"
#include "bh_1750_config.h"
#include "main.h"
#include "i2c.h"
BH1750_HandleTypeDef hbh1750_1 = {
  .I2C = &hi2c1, .Address = BH1750_ADDRESS_L, .Timeout = 0xffff
};

BH1750_HandleTypeDef hbh1750_2 = {
  .I2C = &hi2c1, .Address = BH1750_ADDRESS_H, .Timeout = 0xffff
};

