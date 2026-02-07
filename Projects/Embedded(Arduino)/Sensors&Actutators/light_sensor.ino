
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
  sensor_reading = analogRead(sensor);
  Serial.println(sensor_reading);

  if (sensor_reading>200){
    digitalWrite(led,LOW);
    delay(1);}
  else
    digitalWrite(led,HIGH);

}
