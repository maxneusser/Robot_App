#include <Arduino.h>
#include "main_loop.h"
#include "Servo.h"
#include "Mode.h"
#define FAST_BLINK 100
#define SLOW_BLINK 1000

enum state_type{fast,slow};

Mode mymode;
Servo myservo;

main_loop()
{
	static boolean loop0 = true;
	static int value;
	if (loop0)
	   value = 90;
	//myservo.write(value++); 
	  boolean state_change = false;
	  myservo.attach(3);// attach servo on pin 3 to servo object
	  
	  static int delay_time = 100;
	  static state_type state = fast;
	  
	  int incomingByte = 0;
	  
	  if (state == fast)
	     delay_time = FAST_BLINK;
	  else
	     delay_time = SLOW_BLINK;
	  if ((state_change == true) || loop0 == true)
	  {
	     
		 mymode.main_menu();
	     state_change = false;
		 Serial.print("value is: ");
		 Serial.print(value);
	  }
	  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
	  delay(delay_time);                       // wait for a second
	  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
	  delay(delay_time);                       // wait for a second
	  //Serial.println("loop finished");
	  Serial.print(myservo.read());
      Serial.print("\n");	  
	  if (Serial.available() > 0) 
	  {
		  // read the incoming byte:
		  incomingByte = Serial.read();
		  // say what you got:
		 Serial.print("I received: ");
		 Serial.println(incomingByte, DEC);
		 Serial.print("value is: ");
		 Serial.print(value);
		 
		 if(incomingByte == 43)
		 {
		 	state = slow;
			 value++;
			myservo.write(value++);   
		 }
		 else if(incomingByte == 45)
		 {	
			state = fast;
			myservo.write(value--);   
		 }
	  }
   loop0=false;
}