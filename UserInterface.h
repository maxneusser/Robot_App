/* 
* UserInterface.h
*
* Created: 05.03.2018 22:32:55
* Author: Max
*/
#ifndef __USERINTERFACE_H__
#define __USERINTERFACE_H__
#include <Arduino.h>

enum state_type{fast,slow};
#define FAST_BLINK 100
#define SLOW_BLINK 1000


class UserInterface
{
//variables
public:
  int state;
protected:
private:

//functions
public:
	UserInterface();
	void cyclic();
	~UserInterface();
protected:
private:
	UserInterface( const UserInterface &c );
	UserInterface& operator=( const UserInterface &c );

}; //UserInterface

#endif //__USERINTERFACE_H__
