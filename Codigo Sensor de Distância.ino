// C++ code
//
int inches = 0;

int cm = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
 cm = 0.01723 * readUltrasonicDistance(5, 7);
  
  inches = (cm / 2.54);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.println("cm");
  delay(100);
  
  if(cm <= 90){
  digitalWrite(8, HIGH);
  }
  else digitalWrite(8, LOW);
  if (cm >= 90 && cm <= 180) {
  digitalWrite(9, HIGH);
  }
  else digitalWrite(9, LOW);
  if(cm >= 180){
  digitalWrite(10, HIGH);
  }
  else digitalWrite(10, LOW);
  
}