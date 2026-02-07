
int buttonPin = 2;      // the number of the pushbutton pin is 2
 int ledPin =  13;      // the number of the LED pin is 13

// variables will change:
int buttonState = 0;   // variable for reading the pushbutton status

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}
void loop() {
  // read the state of the pushbutton value:
        digitalWrite(ledPin, LOW);
  buttonState = digitalRead(buttonPin);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  while (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);     // turn LED on
    break;
  }
  delay(100);
}
