#include <SoftwareSerial.h>
const int LDR = D0;
const int relay = D1;
int value;

void setup() {
  Serial.begin(115200);
  pinMode(LDR, INPUT);
  pinMode(relay, OUTPUT);
  digitalWrite(relay, LOW);
}

void loop() {
  value = digitalRead(LDR);
  if (value == HIGH) {
    digitalWrite(relay, LOW);
    Serial.println("RELAY OFF");
  } else {
    digitalWrite(relay, HIGH);
    Serial.println("RELAY ON");
  }
}