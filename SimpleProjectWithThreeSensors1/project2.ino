#include <SoftwareSerial.h>
const int IRSensor = D0;
const int RainSensor = A0;
const int Motion = D3;
const int LDR = D4;
const int led = D5;

int value1, value2, value3, value4, value5;
float ans;

void setup() {
  Serial.begin(9600);
  pinMode(IRSensor, INPUT);
  pinMode(Motion, INPUT);
  pinMode(LDR, INPUT);
  pinMode(RainSensor, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}

void loop() {

  value1 = digitalRead(IRSensor);

  if (value1 == HIGH) {
    digitalWrite(led, LOW);
    Serial.println("DOOR OPEN, PLEASE CLOSE IT !!");
  } else {
    digitalWrite(led, HIGH);
    Serial.println("DOOR CLOSED !!");
  }
  delay(10000);  

  value2 = digitalRead(Motion);
  value3 = digitalRead(LDR);

  if (value2 == HIGH) {
    Serial.println("MOTION DETECTED ");
    if (value3 == HIGH) {
      digitalWrite(led, LOW);
      Serial.println("NO NEED OF LIGHT ");
    } else {
      digitalWrite(led, HIGH);
      Serial.println("LIGHTS ON!!");
    }
    delay(10000);
  } else {
    Serial.println("MOTION NOT DETECTED");
  }
  delay(10000);

  value4 = analogRead(RainSensor);
  if(value4 > 200){
    Serial.println("RAIN ADEQUATE !");
  }
  else{
    Serial.println("RAIN REQUIRED !");
  }
  delay(10000);
}