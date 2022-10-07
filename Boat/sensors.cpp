#include <iostream>
#include <list> 

float convertTempDataToCelsius(int integerUOut, int R1,) {
	float temp;
		
	// convert raw temperature sensor output data to celsius
	
	// converting integerUOut to Volt
	float UOut = integerUOut * 5 / 1023;
	
	// calculating resistance (R2) of NTC thermistor: sheet ELS101.1
	float R2 = R1 / ((5.0 / UOut) - 1);
	
	// converting R2 to celsius, thermistor calibration required of form: T = a * b^R
	float a = 1.0;
	float b = 1.0;
	
	temp = a * pow(b, R2);
	return temp;
}

float convertPressureDataToPascal(pressureSensorOutput) {
	float pressure;

	// convert raw pressure sensor output data to pascals

	return pressure;
}

float convertSalineDataToPercent(salinitySensorOutput) {
	float salinity;

	// convert raw salinity sensor output data to g/kg

	return salinity;
}

void returnData(dataList) {
        // transmit list of data through radio transmission
}
