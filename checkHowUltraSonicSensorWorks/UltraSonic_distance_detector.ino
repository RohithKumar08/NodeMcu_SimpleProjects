#include<SoftwareSerial.h>
const int trig = D2;
const int echo =D3;
const int relay = D5;
long duration;
int distance;
void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(relay, OUTPUT);
}

void loop() {
  digitalWrite(trig , LOW);
  delay(1000);
  digitalWrite(trig , HIGH);
  delay(1000);
  digitalWrite(trig, LOW);
  duration = (pulseIn(echo, HIGH));
  distance = (duration * 0.034/2);
  Serial.println(distance);
  if(distance < 20){
    digitalWrite(relay, HIGH);
    Serial.println("MOTOR OFF");
  }
  else{
    digitalWrite(relay, LOW);
    Serial.println("MOTOR ON");
  }
  delay(2000);
}
