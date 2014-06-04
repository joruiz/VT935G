/*
  Arduino Library to VT935G photoconductive cell
  More info in http://www.farnell.com/datasheets/1511557.pdf
*/

#ifndef VT935G_H
#define VT935G_H

#include "Arduino.h"

class VT935G
{
	public:
		VT935G(uint8_t inPin);
		float readLux();
		float readFc();

	private:
		uint8_t _inPin;
};

#endif