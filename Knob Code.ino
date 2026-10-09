#include <Servo.h>

Servo myservo;

int potpin = A0;  // Potentiometer connected to Pin A0
int val;         // Variable to read raw potentiometer value
int angle;       // Target servo angle (0 to 180 degrees)
int speedDelay;  // Variable to control speed delay

void setup() {
  myservo.attach(9); // Connect servo signal pin to Digital Pin 9
}

void loop() {
  val = analogRead(potpin);            // Read raw potentiometer value (0 to 1023)
  angle = map(val, 0, 1023, 0, 180);   // Map reading to servo degrees (0 to 180)

  // Set response delay based on potentiometer position:
  if (val < 341) {
    speedDelay = 5;    // SPEED 1: FAST (0% - 33% knob position)
  } else if (val < 682) {
    speedDelay = 20;   // SPEED 2: MEDIUM (34% - 66% knob position)
  } else {
    speedDelay = 50;   // SPEED 3: SLOW (67% - 100% knob position)
  }

  myservo.write(angle); // Move servo to mapped position
  delay(speedDelay);    // Speed delay before next loop iteration
}