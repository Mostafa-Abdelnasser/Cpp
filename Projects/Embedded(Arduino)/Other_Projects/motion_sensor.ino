int led = 13;
int motion_sensor = 3;
void setup() {

pinMode(led,OUTPUT);
pinMode(motion_sensor,INPUT);
Serial.begin(9600);
}
void loop() {
  
int motion_detected = digitalRead(motion_sensor);
if (motion_detected == HIGH)
  {
  digitalWrite(led,HIGH);
  }
if (motion_detected == LOW)
  {
  digitalWrite(led,LOW);
  }
}
