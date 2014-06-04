/*
  Arduino Library to VT935G photoconductive cell
  More info in http://www.farnell.com/datasheets/1511557.pdf
*/

#include "Arduino.h"
#include "VT935G.h"

//
// Constructor
//
// initialize connections
VT935G::VT935G(uint8_t inPin){

	_inPin = inPin;
}

//
// readLux
//
// read sensor and return the value in luxes
float VT935G::readLux(){

	int inValue = analogRead(_inPin);
	return inValue * 0.407;				//(5V / 1023) / 0.012lux/V
}

//
// readFc
//
// read sensor and return the value in Foot-Candles
float VT935G::readFc(){

	int inValue = analogRead(_inPin);
	return inValue * 0.041;				//(5V / 1023) / 0.119fc/V
}