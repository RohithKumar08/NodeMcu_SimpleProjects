#include<SoftwareSerial.h>
SoftwareSerial btSerial(D2, D3);
const int led = D5;
char value;

void setup(){
  btSerial.begin(9600);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}

void loop(){
  if(btSerial.available() > 0){
    value = btSerial.read();
  }

  if(value == 'ON'){
    digitalWrite(led, HIGH);
    Serial.println("LED ON !!!");
  }
  else{
    digitalWrite(led, LOW);
    Serial.println("LED OFF !!!");
  }

}
