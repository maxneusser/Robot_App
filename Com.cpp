/* 
* Com.cpp
*
* Created: 12.03.2018 23:48:19
* Author: Max
*/


#include "Com.h"

// default constructor
Com::Com()
{
} //Com

// default destructor
Com::~Com()
{
} //~Com

extern Servo myServo;
extern UserInterface myUserInterface;

Com::cyclic()
{
     static int value = STANDARD_CENTER;
	 if (Serial.available() > 0)
	 {
		 // read the incoming byte:
		 int incomingByte = Serial.read();
		 // say what you got:
		 Serial.print("I received: ");
		 Serial.println(incomingByte, DEC);
		 
		 if(incomingByte == 43)
		 {
			 myUserInterface.state = slow;
			 myServo.write(value++);
		 }
		 else if(incomingByte == 45)
		 {
			 myUserInterface.state  = fast;
			 myServo.write(value--);
		 }
   }
}
