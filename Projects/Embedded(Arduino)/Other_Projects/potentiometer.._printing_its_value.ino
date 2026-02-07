int potentiometer = A0;
int led=13; 
int potValue=0;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(potentiometer , INPUT);
  pinMode(led , OUTPUT);
}

void loop() {
  // read the input on analog pin 0:
   potValue = analogRead(potentiometer);
  // Convert the analog reading (which goes from 0 - 1023)
  //to a voltage (0 - 5V):
  // print out the value you read:
  analogWrite(led , potValue/4);  
  }

