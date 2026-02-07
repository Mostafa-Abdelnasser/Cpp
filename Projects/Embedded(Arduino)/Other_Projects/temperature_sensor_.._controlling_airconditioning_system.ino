float temp;
int sensorPin=A0;
int fan = 7;
void setup() {
pinMode(sensorPin , INPUT);
pinMode ( fan , OUTPUT);
Serial.begin(9600);
}
void loop() {
temp = analogRead(sensorPin);
temp=temp*.48828125;
Serial.println(temp);
if (temp > 24 )
{    digitalWrite( fan , HIGH);  }
else if (temp < 24)
{    digitalWrite ( fan , LOW);  }
}

