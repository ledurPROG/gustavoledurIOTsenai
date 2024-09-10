const int pinR = A1;
const int pinG = A3;
const int pinB = A2;
const int ldrPin = A0;

void setup()
{
  pinMode(A0,INPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int ldrValue = analogRead(A0);
  Serial.print("Valor LDR: ");
  Serial.println(ldrValue);
  
  if (ldrValue <= 200) {
    setColor(255, 255, 0); 
  } else if (ldrValue <= 400) {
    setColor(255, 0, 255); 
  } else if (ldrValue <= 600) {
    setColor(255, 0, 0); 
  } else if (ldrValue <= 800) {
    setColor(0, 0, 255); 
  } else if (ldrValue <= 1000) {
    setColor(255, 165, 0); 
  } else {
    setColor(255, 255, 255); 
  }
  delay(100);
  }
  void setColor(int red, int green, int blue) {
  analogWrite(pinR, red);
  analogWrite(pinG, green);
  analogWrite(pinB, blue);
  }