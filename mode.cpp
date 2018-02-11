/* 
* mode.cpp
*
* Created: 08.02.2018 21:53:53
* Author: Max
*/

#include <Arduino.h>
#include "mode.h"

// default constructor
Mode::Mode()
{
	
} //mode

void Mode::main_menu()
{
	Serial.print(TEXT_MAIN_MENU);
}

