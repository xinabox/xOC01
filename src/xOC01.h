/*
	This is a library for the OC01 
	BURN WIRE

	The board uses I2C for communication.
	The board communicates with the following I2C device:
	
	* 	PCA9536
	
	Data Sheets:
	PCA9536 - http://www.ti.com/lit/ds/symlink/pca9536.pdf
*/

#ifndef xOC01_h
#define xOC01_h

#pragma once

// Include File Headers
#include "xCore.h"

// PCA9536 Device I2C Address
#define PCA9536_I2C_ADDRESS			0x41

// PCA9536 Register Definitions
#define PCA9536_REG_INPUT_PORT		0x00
#define PCA9536_REG_OUTPUT_PORT		0x01	
#define PCA9536_REG_POL_INVERSION	0x02
#define PCA9536_REG_CONFIG			0x03

#define PCA9536_CONF_OUTPUT			0x00
#define PCA9536_CONF_INPUT			0x0F

#define PCA9536_PIN0_OUTPUT			0x00
#define PCA9536_PIN0_INPUT			0x01

#define PCA9536_PIN1_OUTPUT			0x00
#define PCA9536_PIN1_INPUT			0x02

#define PCA9536_PIN2_OUTPUT			0x00
#define PCA9536_PIN2_INPUT			0x04

#define PCA9536_PIN3_OUTPUT			0x00
#define PCA9536_PIN3_INTPUT			0x08

#define PCA9536_PIN0 		0x01
#define PCA9536_PIN1 		0x02
#define PCA9536_PIN2 		0x04
#define PCA9536_PIN3 		0x08

/********************************************************************/

class xOC01: public xCoreClass
{
	public:
		void write(byte pin, bool state);
		bool begin(void);
		xOC01();
		
	private:
		uint8_t pin_state;
};

extern xOC01 OC01;

#endif