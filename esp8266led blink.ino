/*
# copy this program and paste to arduino IDE editor 

Objective: Blink Inbuilt LED (D0) on NODEMCU
Developed By: Rahul Shrivastava

Hardware Connections: Not Required
*/
const int LED = D1;

void setup() {
  pinMode(LED, OUTPUT);// set the direction of D0(LED) as OUTPUT
}

void loop() {
  digitalWrite(D1, HIGH); // Turn OFF LED
  delay(100);// Delay of 100 ms
  digitalWrite(D1, LOW);// Turn ON LED
  delay(100);// delay 100
}
