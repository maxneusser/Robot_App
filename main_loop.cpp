#include "main_loop.h"

Mode myMode;
Servo myServo;
UserInterface myUserInterface;
Com myCom;
Sonar mySonar;

main_loop()
{
    myUserInterface.cyclic();
    myMode.cyclic();
    myCom.cyclic();
	myMode.main_menu();
	mySonar.cyclic();
}