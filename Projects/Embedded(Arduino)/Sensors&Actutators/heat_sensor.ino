#define sensor A0 
#define led 13 
int sensor_reading ;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor_reading = analogRead(sensor) * 0.488 ;
  Serial.println(sensor_reading);

  if (sensor_reading>23){
    digitalWrite(led,HIGH);
   }

  else
    digitalWrite(led,LOW);

}
