#define button1  2
#define button2  3
#include <Servo.h>
Servo servo;
int pos = 0;

void setup() {
servo.attach(9);
pinMode(button1,INPUT);
pinMode(button2,INPUT);
}

void loop() {
int button1_state = digitalRead(button1);
int button2_state = digitalRead(button2);
while (button1_state ==HIGH)
{
  pos ++;
  servo.write(pos);
  break;
}
while (button2_state ==HIGH)
{
  pos --;
  servo.write(pos);
  break;
}
}
