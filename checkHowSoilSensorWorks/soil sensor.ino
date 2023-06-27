#include<SoftwareSerial.h>
const int SoilSen = A0;
int value, Ans;
void setup() {
  Serial.begin(9600);
  pinMode(SoilSen, INPUT);
  digitalWrite(SoilSen, LOW);

}

void loop() {
  value = analogRead(SoilSen);
  Ans = (100 - ((value/1023)*100));
  Serial.println(Ans);
  delay(1000);
}

