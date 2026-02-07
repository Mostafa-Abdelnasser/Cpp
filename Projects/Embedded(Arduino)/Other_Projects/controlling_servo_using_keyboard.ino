#include <Servo.h>    //loading the servo library
int pos ;
int servo = 9;

int servoDelay = 25;
Servo myServo; //create a servo object


void setup() {
Serial.begin(9600);
myServo.attach(servo);
}

void loop() {  
Serial.println("enter a position");
while(Serial.available()==0)
{}
pos = Serial.parseInt();
if (pos >0)
{
Serial.println(pos);
myServo.write(pos);
delay(100);
}
Serial.println("\t");
Serial.println(pos);

}
