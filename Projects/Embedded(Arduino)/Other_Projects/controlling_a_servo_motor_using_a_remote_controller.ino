#include <IRremote.h>
int RECV_PIN =3 ;
IRrecv irrecv(RECV_PIN);
decode_results results;

#include <Servo.h>    //loading the servo library
int pos = 0;
int servoPin = 10;
int servoDelay = 25;
Servo myServo; //create a servo object

void setup()
{
Serial.begin(9600);
  irrecv.enableIRIn(); //Start the receiver
  myServo.attach(10);

}
void loop()
{
if (irrecv.decode(&results))
    {
     Serial.println(results.value);
     irrecv.resume(); // Receive the next value
          delay(500); 
          switch (results.value)
  {
    
    case 16743045 :   //when a is pressed on the app
    myServo.write(50);
    break;

    case 4294967295 :  //when a is pressed on the app
    myServo.write(50);
    break;
    
    case 16724175 :  //when a is pressed on the app
    myServo.write(50);
    break;
    
    case 16718055 :  //when a is pressed on the app
    myServo.write(90);
    break;
    
    
    
    case 16716015 :  //when a is pressed on the app
    myServo.write(150);
    break;     
    }
    }}


 
