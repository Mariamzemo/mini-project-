/*
 * ultra.h
 *
 *  Created on: Oct 21, 2023
 *      Author: Maryam
 */

#ifndef ULTRA_H_
#define ULTRA_H_

#include "std_types.h"
#include "util/delay.h"


void ultrasonic_edge(void);
void Ultrasonic_init(void);
void Ultrasonic_Trigger(void);
uint16 Ultrasonic_readDistance(void);

#endif /* ULTRA_H_ */
