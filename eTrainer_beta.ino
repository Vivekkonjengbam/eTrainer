int IRselect;
int IRSensor1 = A0;
int IRSensor2 = A1;
int IRSensor3 = A2;
int IRSensor4 = A3;
int IRSensor5 = A4;
int led1 = 2;
int led2 = 3;
int led3 = 11;
int led4 = 10;
int led5 = 9;

void setup() {
  pinMode (IRSensor1,INPUT);
  pinMode (IRSensor2,INPUT);
  pinMode (IRSensor3,INPUT);
  pinMode (IRSensor4,INPUT);
  pinMode (IRSensor5,INPUT);
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (led4,OUTPUT);
  pinMode (led5,OUTPUT);
}

void loop() {
int IRselect = random(2);
switch(IRselect)
{
  case 0:
  digitalWrite(led1,HIGH);
  delay(20);
  while(digitalRead(IRSensor1) ==1)
  {delay(20);}
  digitalWrite(led1,LOW);
  break;
  case 1:
  digitalWrite(led2,HIGH);
  delay(20);
  while(digitalRead(IRSensor2) ==1)
  {delay(20);}
  digitalWrite(led2,LOW);
  break;
  case 2:
  digitalWrite(led3  ,HIGH);
  delay(20);
  while(digitalRead(IRSensor3) ==1)
  {delay(20);}
  digitalWrite(led3,LOW);
  break;
  case 3:
  digitalWrite(led4,HIGH);
  delay(20);
  while(digitalRead(IRSensor4) ==1)
  {delay(20);}
  digitalWrite(led4,LOW);
  break;
  case 4:
  digitalWrite(led5,HIGH);
  delay(20);
  while(digitalRead(IRSensor5) ==1)
  {delay(20);}
  digitalWrite(led5,LOW);
  break;
  default:
  delay(20);
  break;
  }
}
