#include <Arduino.h>
#include "main_loop.h"
#include "Servo.h"
#include "Mode.h"
#define FAST_BLINK 100
#define SLOW_BLINK 1000

enum state_type{fast,slow};
extern Mode thismode;
Servo myservo;

main_loop()
{
    boolean state_change = false; 
	  
	static int delay_time = 100;
	static state_type state = fast;
	  
	int incomingByte = 0;
	  
	if (state == fast)
	   delay_time = FAST_BLINK;
	else
	   delay_time = SLOW_BLINK;
	if (state_change == true) 
	{
	     
		 thismode.main_menu();
	     state_change = false;
		 Serial.print("value is: ");
	  }
	  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
	  delay(delay_time);                       // wait for a second
	  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
	  delay(delay_time);                       // wait for a second
	  //Serial.println("loop finished");
	  //Serial.print(myservo::read());
      //Serial.print("\n");	  
	  if (Serial.available() > 0) 
	  {
		  // read the incoming byte:
		  incomingByte = Serial.read();
		  // say what you got:
		 Serial.print("I received: ");
		 Serial.println(incomingByte, DEC);
	 
		 if(incomingByte == 43)
		 {
		 	state = slow;
			//myservo.write(value++);   
		 }
		 else if(incomingByte == 45)
		 {	
			state = fast;
			//myservo.write(value--);   
		 }
	  }
}