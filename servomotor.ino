#include <Servo.h>
int pos=0;

Servo servo;
 
 


void setup() {
  // put your setup code here, to run once:
 pinMode(2, INPUT);
  pinMode(3,INPUT);
  servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

  while (digitalRead(2)== HIGH && pos<180){
    pos++;
    servo.write(pos);
    delay(15);
  }

  while (digitalRead(3)== HIGH && pos<0){
    pos--;
    servo.write(pos);
    delay(15);
  }

}
