#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(9); // Connect servo signal pin to Digital Pin 9
}

void loop() {
  // --- SPEED 1: FAST (5 ms delay) ---
  for (int pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(5); 
  }
  for (int pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(5);
  }
  delay(1000); // Brief pause at 0 degrees

  // --- SPEED 2: MEDIUM (20 ms delay) ---
  for (int pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(20); 
  }
  for (int pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(20);
  }
  delay(1000); // Brief pause at 0 degrees

  // --- SPEED 3: SLOW (50 ms delay) ---
  for (int pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(50); 
  }
  for (int pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(50);
  }
  delay(1000); // Brief pause before repeating cycle
}