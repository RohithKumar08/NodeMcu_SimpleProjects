#include <SoftwareSerial.h>
const int MotionSensor = D0;
const int buzzer = D1;
int value;

void setup() {
  Serial.begin(9600);
  pinMode(MotionSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);
  // delay(1000);
}

void loop() {
  value = digitalRead(MotionSensor);
  if (value == HIGH) {
    digitalWrite(buzzer, LOW);
    Serial.println("SOUND OFF");
    // delay(1000);
  } else {
    digitalWrite(buzzer, HIGH);
    Serial.println("SOUND ON");
    // delay(1000);
  }
}
