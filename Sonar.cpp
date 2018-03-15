/* 
* Sonar.cpp
*
* Created: 14.02.2018 22:25:05
* Author: Max
*/
#include "Sonar.h"

extern int Trig; 
extern int Echo; 
// default constructor
Sonar::Sonar()
{
} //Sonar

// default destructor
Sonar::~Sonar()
{
} //~Sonar

int Sonar::cyclic()
{
	Distance_test();
}

int Sonar::Distance_test(void)
{
	digitalWrite(Trig, LOW);
	delayMicroseconds(2);
	digitalWrite(Trig, HIGH);
	delayMicroseconds(20);
	digitalWrite(Trig, LOW);
	float Fdistance = pulseIn(Echo, HIGH);
	Fdistance= Fdistance/58;
	Serial.print("Wert ist: \n");
	Serial.println((int)Fdistance, DEC);
	return (int)Fdistance;
}