#define led 11
#define pot A0  // define the pins which will work
int potreading ;
int brightness;    // make variables to store the input values store intgers which is from 0 to 1023 if analog
void setup() 
{
  pinMode(led,OUTPUT); // determine the which will be the out
  Serial.begin(9600);
}

void loop() 
{
  Serial.println(potreading);
  potreading = analogRead(A0); // save the reading in the vraible
  brightness = map(potreading,0,1023,0,255); /* change the range of the reading because the max out put is 255 
  as if it sayed the same it wil preform cycles as 1023 contain four 255 */
  analogWrite(led,brightness);  // send the analog siginal to the light bulb

}
