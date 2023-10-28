/*
 * appp.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Maryam
 */

/*
 * APP.C
 *
 *  Created on: Oct 21, 2023
 *      Author: Maryam
 */


#include "ultra.h"

#include "lcd.h"
#include "avr/io.h"
#include "util/delay.h"

int main()
{
	Ultrasonic_init();
	 LCD_init();
	 LCD_displayString("distance: ");
	 SREG|=(1<<7);

while (1)
{
	LCD_moveCursor(0,10);

	int x=Ultrasonic_readDistance();
	if (x<100){
	LCD_intgerToString(x);
	LCD_displayString(" ");
	}
	else if (x>=100)
		{
		LCD_intgerToString(x);
		}
	_delay_ms(100);

}


}

