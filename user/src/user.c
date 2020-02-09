/*
 * user.c
 *
 *  Created on: 9 feb 2020
 *      Author: Oleksii
 */

#include "user.h"

msg_t sendString(char *str) {
	size_t sz = strlen(str);
	return uartSendFullTimeout(&PORTAB_UART2, &sz, str, TIME_INFINITE);
}
