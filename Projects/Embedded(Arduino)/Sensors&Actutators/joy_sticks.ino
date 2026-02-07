
#define led 11
#define ms 7 
#define x A0
#define y A1

int x1;
int y1;
bool ms1 ;




void setup() {
  // put your setup code here, to run once:

  pinMode(led,OUTPUT);
  pinMode(ms,INPUT_PULLUP);
  Serial.begin(9600);

  
  

}

void loop() {
  // put your main code here, to run repeatedly:

x1 =   analogRead(x);
  y1 =   analogRead(y);
 ms1 = digitalRead(ms);

  
if(ms1 == HIGH){
  

  Serial.print(y1);
  delay(100);
  Serial.print("\t");
  Serial.print(x1);
    delay(100);

  Serial.print("\t");
  Serial.println(ms1);
    delay(100);

  int r1 = map(x1,0,1023,0,255);
  analogWrite(led,r1);
}

  else if(ms1 == LOW){

    digitalWrite(led,LOW);

    
    
    }

  

  



}
