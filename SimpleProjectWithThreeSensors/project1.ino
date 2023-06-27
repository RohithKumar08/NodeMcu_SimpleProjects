#include<SoftwareSerial.h>

const int ldr = D0;
const int Flame = D1;
// const int SoilSen = D2;
const int IRSensor = D3;
// const int led = D6;
const int buzz = D7; 
int value1, value2,value3;

void setup() {
  Serial.begin(9600);
  pinMode(ldr, INPUT);
  pinMode(Flame, INPUT);
  pinMode(IRSensor, INPUT);
  pinMode(buzz, OUTPUT);
  digitalWrite(buzz, LOW);
  digitalWrite(Flame, LOW);
}

void loop() {

  value1 = digitalRead(IRSensor);
  value2 = digitalRead(ldr);
  
  if (value1 == HIGH) {
    if(value2 == 0){
      digitalWrite(buzz, LOW);
      Serial.println("Light Not Detected !!");
    }
    else {
      value3 = digitalRead(Flame);
      if(value3 == HIGH){
        digitalWrite(buzz, HIGH);
        Serial.println("Fire Detected");
        delay(1000);
      }
      else{
        digitalWrite(buzz, LOW);
        Serial.println("Fire Not Detected");
        delay(1000);
      }
      Serial.println("Light Detected !!");
      Serial.println("Touch Not Detected !!");
    }
  }

  else {
    digitalWrite(buzz, HIGH);
    Serial.println("Touch Detected !!");
  }
  delay(1000);
}
