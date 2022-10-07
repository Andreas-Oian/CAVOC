int updateFrequency = 10;

void setup() {
	Serial.begin(9600);
}

void loop() {
	steer();
	delay(updateFrequency);
}

void steer() {
	// update steering from controller inputs
}
