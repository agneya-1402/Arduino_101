#include <Servo.h> // Include the Servo library

Servo servo_1;     // Create a Servo object

void setup() {
  Serial.begin(9600);   // Start serial communication at 9600 baud
  servo_1.attach(9);    // servo to pin 9
  Serial.println("Enter angle (0-180):");  // Print in Serial Monitor
}

void loop() {
  if (Serial.available() > 0) {            // Check if data is available to read
    int angle = Serial.parseInt();         // Read the input as an integer

    // range
    if (angle >= 0 && angle <= 180) {
      servo_1.write(angle);                // Set the servo position
      Serial.print("Servo moved to: ");
      Serial.println(angle);               // Print the angle
    } else {
      Serial.println("Invalid angle!");
    }
    
    delay(10);  // Small delay for stability
  }
}
