/*
This Battle Bot is sponsored by

██████   █████  ██ ██████
██   ██ ██   ██ ██ ██   ██ ██
██████  ███████ ██ ██   ██
██   ██ ██   ██ ██ ██   ██ ██
██   ██ ██   ██ ██ ██████

███████ ██   ██  █████  ██████   ██████  ██     ██     ██      ███████  ██████  ███████ ███    ██ ██████  ███████ 
██      ██   ██ ██   ██ ██   ██ ██    ██ ██     ██     ██      ██      ██       ██      ████   ██ ██   ██ ██      
███████ ███████ ███████ ██   ██ ██    ██ ██  █  ██     ██      █████   ██   ███ █████   ██ ██  ██ ██   ██ ███████ 
     ██ ██   ██ ██   ██ ██   ██ ██    ██ ██ ███ ██     ██      ██      ██    ██ ██      ██  ██ ██ ██   ██      ██ 
███████ ██   ██ ██   ██ ██████   ██████   ███ ███      ███████ ███████  ██████  ███████ ██   ████ ██████  ███████ 

:D

*/
#include <Servo.h>

Servo myservo1;
Servo myservo2;

int pos = 0;

void setup() {
  myservo1.attach(9);
  myservo2.attach(10);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
  
  for (pos = 0; pos <= 180; pos += 1) {
    myservo1.write(pos);
    delay(15);
  }
  
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo1.write(pos);
    delay(15);
  }
  
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
  
  for (pos = 0; pos <= 180; pos += 1) {
    myservo2.write(pos);
    delay(15);
  }
  
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo2.write(pos);
    delay(15);
  }
}
