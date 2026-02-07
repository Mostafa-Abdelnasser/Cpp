// Define color sensor pins

#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8

//define motor 
Int in1 = 2 ; 
Int in2 = 3 ; 
Int ena = 9 ; 

// Calibration Values
// Get these from Calibration Sketch

Int redMin = 43; // Red minimum value
Int redMax = 296; // Red maximum value
Int greenMin = 58; // Green minimum value
Int greenMax = 315; // Green maximum value
Int blueMin = 48; // Blue minimum value
Int blueMax = 253; // Blue maximum value

// Variables for Color Pulse Width Measurements

Int redPW = 0;
Int greenPW = 0;
Int bluePW = 0;

// Variables for final Color values

Int redValue;
Int greenValue;
Int blueValue;

Void setup() {
   // sensor 
  // Set S0 – S3 as outputs
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  
  // Set Sensor output as input
  pinMode(sensorOut, INPUT);
  
  // Set Frequency scaling to 20%
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);

  // motor 
  pinMode (in1 , OUTPUT ) ; 
  pinMode (in2 , OUTPUT ) ;
  pinMode (ena , OUTPUT ) ;
  
  // Setup Serial Monitor
  Serial.begin(9600);
}

Void loop() {
  
  // Read Red value
 if( redPW = getRedPW()) {
  // Map to value from 0-255
  redValue = map(redPW, redMin,redMax,255,0);
  // Delay to stabilize sensor
  Delay(200);
//input 1 & input 2 make it as you like ;)
  digitalWrite (in1 , HIGH ) ; 
  digitalWrite (in2 , LOW ) ; 
//  when the color sensor read red , make the motor run with the half of its speed 
  analogWrite (ena , 128 ) ;  
  }
  
  // Read Green value
 Else if ( greenPW = getGreenPW()){
  // Map to value from 0-255
  greenValue = map(greenPW, greenMin,greenMax,255,0);
  // Delay to stabilize sensor
  Delay(200);

  //input 1 & input 2 make it as you like ;)
  digitalWrite (in1 , HIGH ) ; 
  digitalWrite (in2 , LOW ) ; 
//  when the color sensor read green , make the motor run with the half of its speed 
  analogWrite (ena , 250 ) ; 
  }
  
  // Read Blue value
 Else if ( bluePW = getBluePW()){
  // Map to value from 0-255
  blueValue = map(bluePW, blueMin,blueMax,255,0);
  // Delay to stabilize sensor
  Delay(200);
  
  //input 1 & input 2 make it as you like ;)
  digitalWrite (in1 , HIGH ) ; 
  digitalWrite (in2 , LOW ) ; 
//  when the color sensor read blue , make the motor run with the half of its speed 
  analogWrite (ena , 200 ) ; 
  }
  Else 
  {
    digitalWrite(in1,LOW) ; 
    digitalWrite (in2 , LOW)  ; 
    analogWrite (ena , 0 ) ; 
    }
  
  // Print output to Serial Monitor
  Serial.print(“Red = “);
  Serial.print(redValue);
  Serial.print(“ – Green = “);
  Serial.print(greenValue);
  Serial.print(“ – Blue = “);
  Serial.println(blueValue);
  
}


// Function to read Red Pulse Widths
Int getRedPW() {

  // Set sensor to read Red only
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  // Define integer to represent Pulse Width
  Int PW;
  // Read the output Pulse Width
  PW = pulseIn(sensorOut, LOW);
  // Return the value
  Return PW;

}

// Function to read Green Pulse Widths
Int getGreenPW() {

  // Set sensor to read Green only
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  // Define integer to represent Pulse Width
  Int PW;
  // Read the output Pulse Width
  PW = pulseIn(sensorOut, LOW);
  // Return the value
  Return PW;

}

// Function to read Blue Pulse Widths
Int getBluePW() {

  // Set sensor to read Blue only
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  // Define integer to represent Pulse Width
  Int PW;
  // Read the output Pulse Width
  PW = pulseIn(sensorOut, LOW);
  // Return the value
  Return PW;

}
