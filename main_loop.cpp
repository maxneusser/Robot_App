// 
// 
// 

#include "main_loop.h"
#include <Arduino.h>
#include <Servo.h>
#define FAST_BLINK 100
#define SLOW_BLINK 1000

enum state_type{fast,slow};


Servo myservo;

/*class Servo
{
	public:
	  void Servo();
	  uint8_t attach(int pin);           // attach the given pin to the next free channel, sets pinMode, returns channel number or 0 if failure
	  uint8_t attach(int pin, int min, int max); // as above but also sets min and max values for writes.
	  void detach();
	  void write(int value);             // if value is < 200 its treated as an angle, otherwise as pulse width in microseconds
	  void writeMicroseconds(int value); // Write pulse width in microseconds
	  int read();                        // returns current pulse width as an angle between 0 and 180 degrees
	  int readMicroseconds();            // returns current pulse width in microseconds for this servo (was read_us() in first release)
	  bool attached();                   // return true if this servo is attached, otherwise false
};*/


main_loop()
{
	static boolean loop0 = true;
	static int value;
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
	     Serial.print("Main Menu!");
	     state_change = false;
	  }
	  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
	  //delay(delay_time);                       // wait for a second
	  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
	  //delay(delay_time);                       // wait for a second
	  //Serial.println("loop finished");
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