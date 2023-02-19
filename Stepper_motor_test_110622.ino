//for the e1 pin
const int stepPin0 = A0; 
const int dirPin0 = A1; 
const int enable0 = 38;


int t = 1500;
int steps =200 ;

void setup(){
  pinMode(stepPin0,OUTPUT);
  pinMode(dirPin0, OUTPUT);
  pinMode(enable0, OUTPUT);
}
void loop(){
  digitalWrite(enable0,LOW);
  digitalWrite(dirPin0,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < steps; x++) {
    digitalWrite(stepPin0,HIGH); 
    delayMicroseconds(t); 
    digitalWrite(stepPin0,LOW); 
    delayMicroseconds(t); 
  }
  delay(1000); // One second delay
  
  digitalWrite(dirPin0,LOW); //Changes the rotations direction
  // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < steps; x++) {
    digitalWrite(stepPin0,HIGH);
    delayMicroseconds(t);
    digitalWrite(stepPin0,LOW);
    delayMicroseconds(t);
  }
  delay(1000);;
}
