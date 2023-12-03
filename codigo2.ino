#include <ESP32Servo.h>




int sensor1=33;

int serv1=25;
int serv2=26;
Servo servo1;  
Servo servo2;
int giro1=0;
int giro2=180;
const int detener=90;

void setup() {  
  pinMode(sensor1,INPUT);

  servo1.attach(serv1,500,2500);
  servo2.attach(serv2,500,2500);
  Serial.begin(115200);
  servo1.write(detener);
  servo2.write(detener);
}
void loop() { 

  int lectdelsensor1=digitalRead(sensor1);
  if(lectdelsensor1==1){
    servo1.write(giro1);
    servo2.write(giro1);
  }else{
    servo1.write(giro1);
    servo2.write(giro2);   
  }

}
