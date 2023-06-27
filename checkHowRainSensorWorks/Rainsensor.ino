#include<SoftwareSerial.h>
const int Rainsen = A0;
int value, Ans;
void setup() {
  Serial.begin(9600);
  pinMode(Rainsen, INPUT);
  pinMode(Rainsen, LOW);

}

void loop() {
  
  value = analogRead(Rainsen);
  Ans = (100.00-(value/1023.00)*100.00);
  Serial.println(Ans);
  delay(1000);
}
