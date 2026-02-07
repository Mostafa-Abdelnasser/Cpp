

int sensorPin = A0; 
int ledPin = 13;      
int sensorValue; 

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin,INPUT);
}
void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
    Serial.println(sensorValue);
    if (sensorValue < 60)
    {  digitalWrite(ledPin,HIGH);  }
 if (sensorValue > 60)
    {  digitalWrite(ledPin,LOW);   } 
}
