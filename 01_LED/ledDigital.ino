const int redPin = 11;
const int yellowPin = 10;
const int greenPin = 9;

void setup() {
pinMode(redPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
pinMode(greenPin,OUTPUT);
}

void loop() {
digitalWrite(redPin,HIGH);
digitalWrite(yellowPin,LOW);
digitalWrite(greenPin,LOW);
delay(500);
digitalWrite(redPin,LOW);
digitalWrite(yellowPin,HIGH);
digitalWrite(greenPin,LOW);
delay(500);
digitalWrite(redPin,LOW);
digitalWrite(yellowPin,LOW);
digitalWrite(greenPin,HIGH);
delay(500);
}
