const int buttonPin = 6;
const int ledPin = 12;

void setup() 
{
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int btnState = digitalRead(buttonPin);
  Serial.print(btnState);
  if(btnState ==LOW)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}
