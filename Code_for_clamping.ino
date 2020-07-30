int dir1 =7;
int pwm1 = 9;
int velocity1=0;
int dir2 =8;
int pwm2 = 10;
int velocity2=0;
int pinA=2;
int pinB=3;
int counter=0;
int aState;
int d;
int enco1;

//int LastState;




void setup() {
  pinMode (dir1, OUTPUT);
  pinMode (dir2, OUTPUT);
  pinMode (pinA,INPUT);
  pinMode (pinB,INPUT);
  attachInterrupt(0, encoder1, CHANGE);
  Serial.begin(9600);
  aLastState =  digitalRead(pinA);
  enco1 = 0.3*counter;
  d = 0.2*enco1/360;

}

void loop() {
  velocity1= velocity1 + 110;
  if(d < 6 && d > 1.5)
  {
  digitalWrite( dir1, HIGH);
  analogWrite( pwm1, velocity1);
  delay(1000);
  }
  else
  {
  digitalWrite( dir1, LOW);
  analogWrite( pwm1, velocity1);
  delay(1000);
  }
  velocity2 = velocity2 + 110;
  if(d < 6 && d > 1.5)
  {
  digitalWrite( dir2, LOW);
  analogWrite( pwm2, velocity2);
  delay(1000);
  }
  else
  {
  digitalWrite( dir2, HIGH);
  analogWrite( pwm2, velocity2);
  delay(1000);
  }
 if(aState!= counter)
  {
  aState== counter;
  Serial.println(counter);
  }
}
void encoder1()
{
  if(digitalRead(pinA)== digitalRead(pinB))
  {
    counter++;
  }
  else
  {
    counter--;
  }
}
