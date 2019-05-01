/*
 * keypad.h
 *
 *  Created on: May 1, 2019
 *      Author: Mahmoud 10
 */

#ifndef KEYPAD_H_
#define KEYPAD_H_

#include "std_types.h"
#include "micro_config.h"
#include "common_macros.h"

/*KEYPAD NUMBER OF ROWS AND COLUMNS CONFIGURATIONS*/
#define N_col 4
#define N_row 4

/* KEYPAD PORT CONFIGURATION */
#define KEYPAD_PORT_OUT PORTD
#define KEYPAD_PORT_IN  PIND
#define KEYPAD_PORT_DIR DDRD

/* getting the pressed keypad key */
uint8 KeyPad_getPressedKey(void);

#endif /* KEYPAD_H_ */
