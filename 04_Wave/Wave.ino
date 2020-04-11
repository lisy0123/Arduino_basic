const int TRIG = 2;
const int ECHO = 3;
const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

void setup() 
{
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
}

void loop() 
{
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  digitalWrite(TRIG,LOW);
  /* Echo 핀으로 들어오는 펄스의 시간을 측정하여 거리를 센티미로 환산
   * 음파의 속도는 240m/s,1cm를 이동하는데 약 29 us
   * 음파의 이동거리 = 왕복시간/1cm 이동시간(29)/2
   */
  long distance = pulseIn(ECHO,HIGH)/29/2;
  analogWrite(redPin,0);
  analogWrite(greenPin,0);
  analogWrite(bluePin,0);
  if(distance<10)
  {
    analogWrite(redPin,255);
  }
  else if(distance < 15)
  {
    analogWrite(greenPin,155);
  }
  else if(distance < 20)
  {
    analogWrite(bluePin,255);
  }
  delay(100);
}
