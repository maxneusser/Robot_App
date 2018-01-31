// main_function.h



#ifndef _MAIN_FUNCTION_h
#define _MAIN_FUNCTION_h

extern main_loop(void);

/*extern int Echo = A4;
extern int Trig = A5;
extern int in1 = 9;
extern int in2 = 8;
extern int in3 = 7;
extern int in4 = 6;
extern int ENA = 11;
extern int ENB = 5;
extern int ABS = 130;*/

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

