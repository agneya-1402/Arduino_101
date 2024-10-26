int tempPin = A0;
 
void setup()
{
Serial.begin(9600);
}
void loop()
{
int senValue = analogRead(tempPin);
  
float value = (senValue/1024.0)*5000;//Convert the read values mv
float cel = value/10; //Convert mV to celsius
  
Serial.print("TEMPRATURE IN CELSIUS: ");
Serial.print(cel);
Serial.print("*C");
Serial.println();
delay(100);

}