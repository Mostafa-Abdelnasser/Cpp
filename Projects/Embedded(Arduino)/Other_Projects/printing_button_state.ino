int button = 2 ;

void setup() {
pinMode (button , INPUT);
Serial.begin(9600);
}

void loop() {
int button_state = digitalRead (button);

  Serial.println( button_state );
}
