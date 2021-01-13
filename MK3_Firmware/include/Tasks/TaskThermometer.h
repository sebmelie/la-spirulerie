#ifndef THERMOMETER_H
#define THERMOMETER_H

#include <Arduino.h>
#include <Spirulerie.h>

#include "App.h"

#define READING_DELAY	3000 //30000

// Global Variables
class Thermometer
{
	public:
		// Members
		OneWire				oneWire;
		DallasTemperature	DS18B20;
		DeviceAddress		adress;
		
		// Methods
		Thermometer();
		bool				StartDevice();
		float				GetTemperature();
};

// Functions
TaskHandle_t	InitThermometer(); // entry point
void			ThermometerTask(void *parameter); // RTOS task loop

#endif