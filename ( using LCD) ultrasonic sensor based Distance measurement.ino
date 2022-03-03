#include<LiquidCrystalIO.h>
const int trig=9, echo=8;
float duration,Distanceincm, Distanceininch;
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,HIGH);
  delay(15);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);

 Distanceincm=duration/58;   //distance calculting in cm from time
  Distanceininch=duration/148; //distance calculting in inch from time

//on lcd first line show cm
  lcd.setCursor(0,0);
  lcd.print("Dist cm=");
  lcd.print(Distanceincm);
//on lcdsecond line show inch
  lcd.setCursor(0,1);
  lcd.print("Dist in=");
  lcd.print(Distanceininch);
  delay(100);


}
