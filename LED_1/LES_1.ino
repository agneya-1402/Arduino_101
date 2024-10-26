const int ledPin = 9;  // Pin where the LED is connected

void setup() {
  Serial.begin(9600);  // Start the serial communication
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
}

void loop() {
  if (Serial.available() > 0) {  // Check if data is available
    char command = Serial.read();  // Read the incoming byte

    if (command == '1') {  // If the command is '1'
      digitalWrite(ledPin, HIGH);  // Turn the LED on
      Serial.println("LED ON");
    } else if (command == '0') {  // If the command is '0'
      digitalWrite(ledPin, LOW);  // Turn the LED off
      Serial.println("LED OFF");
    }
  }
}
