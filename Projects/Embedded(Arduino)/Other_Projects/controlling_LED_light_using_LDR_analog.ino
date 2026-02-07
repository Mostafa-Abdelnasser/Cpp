int led = 11;
int ldr = A0;
int light;
int old_light;
int dif;
int i = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
light = analogRead(ldr);

int i = map (light , 0 , 800, 255, 0 );
analogWrite(led,i);

Serial.print ("light now = \t");
Serial.print (light); 
Serial.print ( " \t i = ");
Serial.println (i);
delay(500);
}
