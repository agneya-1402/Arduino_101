const int ledPin = 9;  

void setup() {
  Serial.begin(9600);  
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  if (Serial.available() > 0) {  
    char command = Serial.read();  

    if (command == '1') {  
      digitalWrite(ledPin, HIGH);  // LED on
      Serial.println("LED ON");
      
    } else if (command == '0') {  
      digitalWrite(ledPin, LOW);  // LED off
      Serial.println("LED OFF");
    }
  }
}
