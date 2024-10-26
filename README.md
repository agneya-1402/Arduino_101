# Arduino Basic Projects Repository

This repository contains a collection of beginner-friendly Arduino projects with detailed code and circuit designs for each project. Each project demonstrates fundamental concepts and provides hands-on experience with sensors, actuators, and display modules in Arduino. This repository serves as a great starting point for anyone new to Arduino or looking to expand their knowledge.

## Projects List

1. **[Temperature Sensor](./Temperature_1)**
   - **Description**: Measures ambient temperature and displays it on the Serial Monitor.
   - **Components**: Temperature sensor (e.g., LM35 or DHT11), Arduino board, jumper wires.
   - **Folder**: [`Temperature_Sensor`](./Temperature_1)
   
2. **[Soil Moisture Sensor](./Moisture_1)**
   - **Description**: Monitors soil moisture levels and displays readings on the Serial Monitor.
   - **Components**: Soil moisture sensor, Arduino board, jumper wires.
   - **Folder**: [`Soil_Moisture_Sensor`](./Moisture_1)
   
3. **[Servo Control via Serial Port](./Servo_1)**
   - **Description**: Controls the position of a servo motor through Serial commands.
   - **Components**: Servo motor, Arduino board, jumper wires.
   - **Folder**: [`Servo_Control`](./Servo_1)
   
4. **[LED Control via Serial Port](./LED_1)**
   - **Description**: Turns an LED on or off based on Serial commands sent from the computer.
   - **Components**: LED, resistor, Arduino board, jumper wires.
   - **Folder**: [`LED_Control`](./LED_1)
   
5. **[Distance Measurement with Ultrasonic Sensor](./Distance-Measure)**
   - **Description**: Measures distance using an ultrasonic sensor and displays the results on the Serial Monitor.
   - **Components**: Ultrasonic sensor (HC-SR04), Arduino board, jumper wires.
   - **Folder**: [`Ultrasonic_Distance_Measurement`](./Distance-Measure)
   
6. **[LCD Display Output](./LCD_1)**
   - **Description**: Displays messages on a 16x2 LCD screen.
   - **Components**: 16x2 LCD, Arduino board, potentiometer, jumper wires.
   - **Folder**: [`LCD_Display`](./LCD_1)
   
7. **[Keypad Inputs](./Keypad_1)**
   - **Description**: Captures and displays key presses from a keypad.
   - **Components**: Keypad module, Arduino board, jumper wires.
   - **Folder**: [`Keypad_Inputs`](./Keypad_1)
   
8. **[PIR Motion Sensor](./MotionSensor_1)**
   - **Description**: Detects motion using a PIR sensor and triggers an LED or other output.
   - **Components**: PIR motion sensor, Arduino board, LED (optional), resistor, jumper wires.
   - **Folder**: [`PIR_Motion_Sensor`](./MotionSensor_1)

## Repository Structure

Each project has its own folder containing:
- `Code.ino`: Arduino sketch with code for the project.
- `Circuit.png`: Circuit diagram for easy setup.
- `README.md`: Brief instructions and component list specific to the project.

## How to Use

1. Clone this repository:
   ```bash
   git clone https://github.com/agneya-1402/Arduino_101.git
   ```
2. Open the Arduino IDE and select the project folder.
3. Open the `Code.ino` file in Arduino IDE.
4. Follow the circuit diagram to connect the components.
5. Upload the code to your Arduino board and observe the output.

## Requirements

- **Hardware**: Arduino Uno (or any compatible board), breadboard, jumper wires, and components listed in each project's README.
- **Software**: [Arduino IDE](https://www.arduino.cc/en/software)

## Contributing

Contributions are welcome! If you have additional basic Arduino projects to share, please submit a pull request.

## License

This project is licensed under the MIT License.
