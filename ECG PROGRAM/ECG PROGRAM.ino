
 
void setup() {
 
Serial.begin(9600);
pinMode(D2,INPUT);  //setup for leads off detection LO+
pinMode(D3,INPUT);   //setup for leads off detection LO-
}
 
void loop() {
 
  if((digitalRead(D2) == 1) || (digitalRead(D3)==1)){
    Serial.println('!');
     delay(100);

  }

  else{
    //send the value of analog input 0;
    Serial.println(analogRead(A0));
    delay(100);
    
  }
  //wait for a bit to keep serial data from saturating
  delay(100);

}
