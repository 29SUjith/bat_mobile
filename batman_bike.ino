// Created by Sujith from DSCE Bangalore

#include <Servo.h>

int servopin=9;
Servo myservo;
char value;
int i=0;
int j=93;
int motorpin=11;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(servopin);
pinMode(motorpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
value=Serial.read();
Serial.println(value);
if(value=='2'){
  i=140;
}
else if(value=='3'){
  i=200;
}
else if(value=='4'){
  i=255;
}
else if(value=='1'){
  i=0;
}
Serial.println(i);


if(value=='5'){
  j=93;
}
else if(value=='6'){
  j=78;
}
else if(value=='7'){
  j=108;
}
else if(value=='8'){
  j=68;
}
else if(value=='9'){
  j=118;
}

Serial.println(j);
myservo.write(j);


if(value=='A'){
  analogWrite(motorpin,i);
  Serial.println("on");
}
else if(value=='Z'){
  analogWrite(motorpin,0);
  Serial.println("off");
}
delay(300);
}
