/* 
* mode.h
*
* Created: 08.02.2018 21:53:53
* Author: Max
*/

//enum mode_t {main;servo};

#ifndef __MODE_H__
#define __MODE_H__

#define TEXT_MAIN_MENU "\
Main Menu:\n\
Please Choose Mode:\n\
1 Servo Mode\n\
"

class Mode
{
//variables
public: 
  // mode_t current_mode;
protected:
private:

//functions
public:
	Mode();
	void main_menu();
protected:
private:
//	mode( const mode &c );
//	mode& operator=( const mode &c );

}; //mode

#endif //__MODE_H__
