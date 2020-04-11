const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

void setup() {
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  if(Serial.available()) {
    char ch = Serial.read();
    if(ch=='r') {
      digitalWrite(redPin,HIGH);
      digitalWrite(greenPin,LOW);
      digitalWrite(bluePin,LOW);
      delay(500);
    }
    else if(ch=='g') {
      digitalWrite(redPin,LOW);
      digitalWrite(greenPin,HIGH);
      digitalWrite(bluePin,LOW);
      delay(500);
    }
    else if(ch=='b') {
      digitalWrite(redPin,LOW);
      digitalWrite(greenPin,LOW);
      digitalWrite(bluePin,HIGH);
      delay(500);
    }
  }
}


