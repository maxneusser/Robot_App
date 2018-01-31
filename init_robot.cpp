// 
// 
// 

#include "init_robot.h"
#include <Arduino.h>
#include <servo.h>

int Echo = A4;
int Trig = A5;
int in1 = 9;
int in2 = 8;
int in3 = 7;
int in4 = 6;
int ENA = 11;
int ENB = 5;
int ABS = 130;


//Servo myservo;

void init_robot()
{
	Serial.begin(9600); //Open the serial port and set the baud rate to 9600
	pinMode(LED_BUILTIN, OUTPUT);
	  pinMode(Echo, INPUT);
	  pinMode(Trig, OUTPUT);
	  pinMode(in1,OUTPUT);
	  pinMode(in2,OUTPUT);
	  pinMode(in3,OUTPUT);
	  pinMode(in4,OUTPUT);
	  pinMode(ENA,OUTPUT);
	  pinMode(ENB,OUTPUT);

}
