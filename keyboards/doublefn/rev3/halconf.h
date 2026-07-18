#pragma once

#define HAL_USE_SPI TRUE

#undef HAL_USE_I2C
#define HAL_USE_I2C FALSE

#include_next <halconf.h>
