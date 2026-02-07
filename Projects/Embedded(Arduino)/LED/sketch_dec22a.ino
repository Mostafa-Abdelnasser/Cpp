// Traffic light
#define red 13
#define green 12 // identifying the out put pins
#define blue 11
#define time1 2000 // determine the time of the operation

void setup() {
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);  // identifying the out put pins & input if there was
pinMode(blue,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (red,HIGH);
digitalWrite (green ,LOW);
digitalWrite (blue,LOW);

delay (time1); 

digitalWrite (red,LOW);
digitalWrite (green ,LOW);
digitalWrite (blue,HIGH);

delay (time1) ;

digitalWrite (red,LOW);
digitalWrite (green ,HIGH);
digitalWrite (blue,LOW);

delay (time1); 
}
