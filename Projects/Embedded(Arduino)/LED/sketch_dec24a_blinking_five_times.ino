int times;
int led;
void btd (int led, int t , int times )
  {

   for( ;times<10;times++)
  {
    digitalWrite(led,HIGH);
    delay(t);
    digitalWrite(led,LOW);
    delay(t);
 
  }

  }
  


void setup() {

 pinMode(led , OUTPUT);
 btd ( 12,50,5);
}

void loop() 
{



}
