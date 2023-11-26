#include <Deneyap_Servo.h>

int sensor1=32;
int sensor2=33;
int serv1=25;
int serv2=26;
Servo servo1;  
Servo servo2;
void setup() {  
  pinMode(sensor1,INPUT);
  pinMode(sensor2,INPUT);
  servo1.attach(serv1);
  servo2.attach(serv2);
  Serial.begin(115200);
}
void loop() { 

  int lectdelsensor1=digitalRead(sensor1);
  int lectdelsensor2=digitalRead(sensor2);
  if(lectdelsensor1==0){
    servo1.write(10);
    delay(500);
    servo1.write(170);
  }
  if(lectdelsensor2==0){
    servo2.write(10);
    delay(500);
    servo2.write(170);
  }
  delay(500);

  
}
