const int analogInPin = A0;
const int analogOutPin = 9;
int IN1 = 3;
int IN2 = 4;
int sensorValue = 0; 
int outputValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode (IN1,OUTPUT);
  pinMode (IN2,OUTPUT);
}
void loop() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  
  sensorValue = analogRead(analogInPin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(analogOutPin, outputValue);
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  delay(2);
}
