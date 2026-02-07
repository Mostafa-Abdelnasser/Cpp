
#define sensor A0 

int sensor_reading ;




void setup() {
  // put your setup code here, to run once:

  pinMode(sensor,INPUT);
  Serial.begin(9600);

  

}

void loop() {
  // put your main code here, to run repeatedly:

 sensor_reading = analogRead(sensor);
 Serial.println(sensor_reading);

 


 
  

}
