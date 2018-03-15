/* 
* Sonar.h
*
* Created: 14.02.2018 22:25:05
* Author: Max
*/


#ifndef __SONAR_H__
#define __SONAR_H__
#include <Arduino.h>
#include "com.h"

class Sonar
{
//variables
public:
protected:
private:

//functions
public:
    cyclic();
	Sonar();
	~Sonar();
protected:
private:
	Distance_test();
	Sonar( const Sonar &c );
	Sonar& operator=( const Sonar &c );

}; //Sonar

#endif //__SONAR_H__
