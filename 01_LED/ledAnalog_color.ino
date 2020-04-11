const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

void setup() {
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop() {
setColor(0,0,0);
delay(200);
setColor(255,0,255);
delay(200);
setColor(255,0,0);
delay(200);
setColor(255,255,0);
delay(200);
setColor(0,255,0);
delay(200);
setColor(0,255,255);
delay(200);
setColor(0,0,255);
delay(200);
setColor(128,128,128);
delay(200);
}

void setColor(int red, int green, int blue) {
analogWrite(redPin,red);
analogWrite(greenPin,green);
analogWrite(bluePin,blue);
delay(500);
}


