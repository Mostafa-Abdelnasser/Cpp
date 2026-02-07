int i=1;
int led = 13;

void setup() {
pinMode ( led , OUTPUT );
}

void loop() {

for ( ; i<=5 ; i++ )
{
digitalWrite(led,HIGH);
delay (300);
 
digitalWrite(led,LOW);
delay (300);  
} 
}
