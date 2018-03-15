/* 
* UserInterface.cpp
*
* Created: 05.03.2018 22:32:55
* Author: Max
*/


#include "UserInterface.h"

// default constructor
UserInterface::UserInterface()
{
	int state = 0;
} 

// default destructor
UserInterface::~UserInterface()
{
}

void UserInterface::cyclic()
{

	static int delay_time = 100;
		  
	if (this->state == fast)
     	delay_time = FAST_BLINK;
	else
		delay_time = SLOW_BLINK;
		  

	digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
	delay(delay_time);                       // wait for a second
	digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
	delay(delay_time);
}