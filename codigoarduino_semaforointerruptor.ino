int buttonState= 0;
void setup()
{
  pinMode(10,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

}

void loop()
{
  buttonState = digitalRead(10);
  if (buttonState == HIGH){
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(3000);
    
    digitalWrite(13, LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    delay(1000);
    
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    delay(2000);
  }
  
}