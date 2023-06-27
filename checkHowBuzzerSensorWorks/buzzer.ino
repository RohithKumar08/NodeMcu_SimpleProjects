#include <SoftwareSerial.h>
const int IRSensor = D0;
const int buzzer = D1;
int value;
void setup() {
  Serial.begin(9600);
  pinMode(IRSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);
}

void loop() {
  value = digitalRead(IRSensor);
  if (value == LOW) {
    digitalWrite(buzzer,LOW);
    Serial.println("BUZZER OFF");
    
  } else {
    digitalWrite(buzzer, HIGH);
    Serial.println("BUZZER ON");
    
  }
}
