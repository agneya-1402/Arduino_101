const int PIR_SENSOR_OUTPUT_PIN = 3;	/* PIR sensor O/P pin */
int warm_up;

void setup() {
  pinMode(PIR_SENSOR_OUTPUT_PIN, INPUT);
  Serial.begin(9600);	/* Define baud rate for serial communication */
  delay(500);	/* Power On Warm Up Delay */
}

void loop() {
  int sensor_output;
  sensor_output = digitalRead(PIR_SENSOR_OUTPUT_PIN);
  if( sensor_output == LOW )
  {
    if( warm_up == 1 )
     {
      Serial.print("Warming Up\n\n");
      warm_up = 0;
      delay(300);
    }
    Serial.print("No object in sight\n\n");
    delay(300);
  }
  else
  {
    Serial.print("Object detected\n\n");    
    warm_up = 1;
    delay(300);
  }  
}