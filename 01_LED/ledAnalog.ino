const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

void setup() {
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop() {
analogWrite(redPin,50);
analogWrite(greenPin,0);
analogWrite(bluePin,0);
delay(300);
analogWrite(redPin,0);
analogWrite(greenPin,50);
analogWrite(bluePin,0);
delay(300);
analogWrite(redPin,0);
analogWrite(greenPin,0);
analogWrite(bluePin,50);
delay(300);
}
