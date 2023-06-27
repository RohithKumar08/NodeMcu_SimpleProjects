#include<SoftwareSerial.h>
const int Smoke = A0;
const int buzz = D1;
int value;

void setup(){
  Serial.begin(9600);
  pinMode(Smoke, INPUT);
  pinMode(buzz, OUTPUT);
  pinMode(buzz, LOW);
}

void loop(){
  // pinMode(Smoke, LOW);
  value = analogRead(Smoke);
  Serial.println(value);
  if(value > 750){
    digitalWrite(buzz, HIGH);
    Serial.println("BUZZ ON");
    delay(2000);
  }
  else{
    digitalWrite(buzz, LOW);
    Serial.println("BUZZ OFF \t");
    delay(2000);
  }
}