#define led 13 ; // define the working bulbs
#define sensor 2 ;
bool sensor_reading; // making a variable with type bool as it will take either 0 or 1
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(sensor,INPUT); // define which is input and which is output
  Serial.begin (9600);// to start the reading in the serial monitor

}

void loop()
{
  sensor_reading = digitalRead(sensor); // assgin the value of the reading of the sensor in the variable
  if(sensor_reading ==HIGH ) // cheak if the reading is high mean it see white color 
  {
   digitalWrite(led,HIGH); // just an indicator that the the sensor recorded a white color reading
   Serial.println(sensor_reading);// to print the reading in the serial monitor
  }
  

}
