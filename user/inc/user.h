/*
 * user.h
 *
 *  Created on: 9 feb 2020
 *      Author: Oleksii
 */

#ifndef USER_INC_USER_H_
#define USER_INC_USER_H_

#include "ch.h"
#include "hal.h"
#include "portab.h"
#include "string.h"

/* LED & buttons defines */

#define GREEN					12
#define ORANGE					13
#define RED						14
#define BLUE					15

#if defined(HAL_USE_PAL)

#define setLED(color) 			palSetPad(GPIOD, color)
#define resetLED(color) 		palClearPad(GPIOD, color)
#define toggleLED(color) 		palTogglePad(GPIOD, color)
#define getUserButton()			palReadPad(GPIOA, 0)

#else

#endif

msg_t sendString(char *str);

#endif /* USER_INC_USER_H_ */
