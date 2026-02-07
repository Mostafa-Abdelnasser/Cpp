#define led 13
#define sensor 7
bool sensor_reading;



void setup() {
  // put your setup code here, to run once:

  pinMode(led,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  sensor_reading = digitalRead(sensor);
  Serial.println(sensor_reading);
  

  if(sensor_reading == HIGH)
   digitalWrite(led,HIGH);
  else
     digitalWrite(led,LOW);


  

}
