// push button to operate the bulb
#define led 13
#define button 2    // define the pins that i will work on

void setup() {
pinMode(led,OUTPUT);
pinMode(button,INPUT); //determine which is input and which is output
}

void loop() {
 if (digitalRead (button) == HIGH) // condition say if the button is on light the bin
      digitalWrite (led,HIGH ) ;
else 
      digitalWrite (led,LOW);
}
