#include <Servo.h> 

Servo servo_1;     

void setup() {
  Serial.begin(9600);  
  servo_1.attach(9);    
  Serial.println("Enter angle (0-180):");  // Print in Serial Monitor
}

void loop() {
  if (Serial.available() > 0) {           
    int angle = Serial.parseInt();         

    // range
    if (angle >= 0 && angle <= 180) {
      servo_1.write(angle);                // Set servo position
      Serial.print("Servo moved to: ");
      Serial.println(angle);              
    } else {
      Serial.println("Invalid angle!");
    }
    delay(10); 
  }
}
