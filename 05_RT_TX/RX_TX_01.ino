char send = 'A';

void setup() 
{
  Serial.begin(9600);
  Serial.println("UART");
}

void loop() 
{
  Serial.println(send);
  send++;

  if(send > 'Z')
  {
    send = 'A';
  }
  delay(1000);
}
