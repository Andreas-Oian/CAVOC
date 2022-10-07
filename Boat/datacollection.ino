#import <sensors.cpp>

int updateFrequency = 2000  // ms, modifiable

void setup() {
	Serial.begin(9600);
}

void loop() {
	// return getSensorData() values to a list of current data to send to land
	delay(updateFrequency);  // time between sensor update
}

float getSensorData() {
	// init sensor vars
	float tempSensorOutput;
	float pressureSensorOutput;
	float salinitySensorOutput;
	
	// here we are going to assign the vars the raw input data from the sensors
	
	// convert raw data
	float temp = convertTempDataToCelsius(tempSensorOutput);
	float pressure = convertPressureDataToPascal(pressureSensorOutput);
	float salinity = convertSalineDataToPercent(salinitySensorOutput);

	return temp, pressure, salinity;
}
