#include <Servo.h>    //loading the servo library
int pos = 0;
int servoPin = 9;
int servoDelay = 25;
Servo myServo; //create a servo object
int pot = A0;
int potValue ; 

void setup() {
Serial.begin(9600);
myServo.attach(servoPin);
pinMode(pot , INPUT);
}

void loop() {  

  if (Serial.available())
{
  potValue = Serial.read();

//  reading data recieved from Bluetooth module
  switch (potValue)
  {
    
    case '0':  //when a is pressed on the app
    myServo.write(50);
    break;

    case '1':  //when a is pressed on the app
    myServo.write(10);
    break;
    
    case '2':  //when a is pressed on the app
    myServo.write(20);
    break;
    
    case '3':  //when a is pressed on the app
    myServo.write(30);
    break;
    
    case '4':  //when a is pressed on the app
    myServo.write(40);
    break;
    
    case '5':  //when a is pressed on the app
    myServo.write(50);
    break;
    
    case '6':  //when a is pressed on the app
    myServo.write(60);
    break;
        
    case '7':  //when a is pressed on the app
    myServo.write(70);
    break;
        
    case '8':  //when a is pressed on the app
    myServo.write(80);
    break;
        
    case '9':  //when a is pressed on the app
    myServo.write(90);
    break;
        
    case 'a':  //when a is pressed on the app
    myServo.write(100);
    break;
        
    case 'b':  //when a is pressed on the app
    myServo.write(110);
    break;
        
    case 'c':  //when a is pressed on the app
    myServo.write(120);
    break;
    
    case 'd':  //when a is pressed on the app
    myServo.write(130);
    break;

    case 'e':  //when a is pressed on the app
    myServo.write(140);
    break;
    
    case 'f':  //when a is pressed on the app
    myServo.write(150);
    break;
    
    case 'g':  //when a is pressed on the app
    myServo.write(160);
    break;
    
    case 'h':  //when a is pressed on the app
    myServo.write(170);
    break;

    case 'j':  //when a is pressed on the app
    myServo.write(180);
    break;
    
  }
  Serial.print(potValue);
}
delay(50);

}
