const int ledPin = 6;

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0);
  int ledBright = map(value,0,1023,0,255);
  Serial.println(ledBright);
  analogWrite(ledPin,ledBright);
  delay(500);
}
