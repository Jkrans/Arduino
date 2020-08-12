/*
  This program blinks pin 13, 12, 11, and 10 on the breadboard
*/

int buttonState = 0;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  buttonState = digitalRead(3);
  if (buttonState == HIGH){
    for (int i = 0 ; i < 3; i++){
      blinker(13);
      blinker(12);
      blinker(11);
      blinker(10);
      blinker(11);
      blinker(12);
    }
    
    lightsOn(13,12,11,10);
    
    for (int i = 0 ; i < 5; i++){
      allBlink(13,12,11,10);
    }
  }

  delay(10);
}

void blinker(int pin) {  
    digitalWrite(pin, HIGH);
    delay(250);
    digitalWrite(pin, LOW);  
}

void allBlink(int pin1, int pin2, int pin3, int pin4) {
	digitalWrite(pin1, HIGH);
  	digitalWrite(pin2, HIGH);
  	digitalWrite(pin3, HIGH);
  	digitalWrite(pin4, HIGH);
    	delay(250);

    	digitalWrite(pin1, LOW);
  	digitalWrite(pin2, LOW);
  	digitalWrite(pin3, LOW);
  	digitalWrite(pin4, LOW);
  	delay(100);  	
}

void lightsOn(int pin1, int pin2, int pin3, int pin4) {
	digitalWrite(pin1, HIGH);
  	delay(500);

  	digitalWrite(pin2, HIGH);
  	delay(500);

  	digitalWrite(pin3, HIGH);
  	delay(500);

  	digitalWrite(pin4, HIGH);
}

