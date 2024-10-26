#include <LiquidCrystal.h>
int Contrast = 75;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
    analogWrite(6, Contrast);
    lcd.begin(16, 2);
    Serial.begin(9600); // Initialize serial communication at 9600 baud rate
}

void loop() {
    if (Serial.available() > 0) { // Check if data is available
        lcd.clear();              // Clear the LCD screen

        String input = "";        // Initialize an empty string to store the input
        while (Serial.available() > 0) { // While there's data in the Serial buffer
            char c = Serial.read();      // Read each character
            input += c;                  // Append each character to the string
            delay(10);                   // Small delay for stable reading
        }

        // Print the first line
        lcd.setCursor(0, 0);
        lcd.print(input.substring(0, 16)); // Print up to the first 16 characters

        // Print the second line if the message is longer than 16 characters
        if (input.length() > 16) {
            lcd.setCursor(0, 1);
            lcd.print(input.substring(16, 32)); // Print up to the next 16 characters
        }
    }
}
