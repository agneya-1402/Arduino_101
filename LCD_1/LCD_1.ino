#include <LiquidCrystal.h>
int Contrast = 75;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
    analogWrite(6, Contrast);
    lcd.begin(16, 2);
    Serial.begin(9600); 
}

void loop() {
    if (Serial.available() > 0) { 
        lcd.clear();              // Clear the LCD screen

        String input = "";        // Initialize an empty string 
        while (Serial.available() > 0) { 
            char c = Serial.read();      
            input += c;           // Append each character to the string
            delay(10);                   
        }

        // Print the first line
        lcd.setCursor(0, 0);
        lcd.print(input.substring(0, 16)); // Print first 16 characters

        // Print the second line 
        if (input.length() > 16) {
            lcd.setCursor(0, 1);
            lcd.print(input.substring(16, 32)); // next 16 characters
        }
    }
}
