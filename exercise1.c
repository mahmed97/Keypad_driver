/*
 * exercise1.c
 *
 *  Created on: May 1, 2019
 *      Author: Mahmoud 10
 */

#include "keypad.h"

int main(void) {
	uint8 button;
	DDRC = 0x0F;
	PORTC = 0x00;
	while (1) {

		button = Keypad_getPressedKey();
		if ((button >= 0) && (button <= 9))
			PORTC = button;
	}
	return 0;
}
