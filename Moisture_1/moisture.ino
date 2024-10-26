const int sensor_input=A3;

int sensor_value; 

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  sensor_value=analogRead(sensor_input);
  Serial.print("sensor moisture value="); 
  Serial.println(sensor_value); 

  delay(1000);
  
}