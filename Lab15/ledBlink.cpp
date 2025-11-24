//@author: Isaac Avila-Branson
//@date: 11/24/2025
//@purpose: Create a program that blinks and led


int led = 8; //assigning value of 8 to integer led

void setup() {
	pinMode(led, OUTPUT); //set the pin to output using created variable
	Serial.begin(9600); //set the serial port speed
}

void loop() {
	digitalWrite(led, HIGH); //turn the led pin on
  	delay(250); //delays for 500 ms
  	digitalWrite(led, LOW); //turn the led pin off
  	delay(250); //delays again for 500ms
}