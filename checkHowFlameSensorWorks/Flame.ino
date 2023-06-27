#include<SoftwareSerial.h>
const int Flame = D0;
const int buzz = D4;
int value;

void setup(){
  Serial.begin(9600);
  pinMode(Flame, INPUT);
  pinMode(buzz, OUTPUT);
  digitalWrite(buzz, LOW);
}

void loop(){
  value = digitalRead(Flame);
  Serial.println(value);
  if(value == 0){
    digitalWrite(buzz, HIGH);
    Serial.println("BUZZ ONN ");
  }
  else{
    digitalWrite(buzz, LOW);
    Serial.println("BUZZ OFF ");
  }
  delay(2000);
}
