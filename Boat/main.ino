#import <sensors.cpp>

void setup() {
	Serial.begin(9600);
}

void loop() {
	// return getSensorData() values to a list of current data to send to land
	delay(2000);
}

float getSensorData() {
	float tempSensorOutput;
	float pressureSensorOutput;
	float salinitySensorOutput;
	
	float temp = convertTempDataToCelsius(tempSensorOutput);
	float pressure = convertPressureDataToPascal(pressureSensorOutput);
	float salinity = convertSalineDataToPercent(salinitySensorOutput);

	return temp, pressure, salinity;
}
