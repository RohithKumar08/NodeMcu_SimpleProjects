#include <SoftwareSerial.h>
const int ldr = D3;
const int led = D4;
int value;

void setup() {
  Serial.begin(9600);
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}


void loop() {
  value = digitalRead(ldr);
  // if(value == 0)
  if (value == 1) {
    digitalWrite(led, HIGH);
    Serial.println("LED ON");
    
  } else {
    digitalWrite(led, LOW);
    Serial.println("LED OFF");
    
  }
}
