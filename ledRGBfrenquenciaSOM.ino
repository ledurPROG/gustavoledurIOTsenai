int buzzer = 8;
int pinR = 9;
int pinG = 10;
int pinB = 11;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
}

void loop()
{
  int toneFrequency;

  toneFrequency = 100;
  tone(buzzer, toneFrequency, 1000);
  delay(800);
  noTone(buzzer);
  delay(500);

  setColorForTone(toneFrequency);

  toneFrequency = 200;
  tone(buzzer, toneFrequency, 1000);
  delay(200);
  noTone(buzzer);
  delay(500);
  setColorForTone(toneFrequency);

  toneFrequency = 250;
  tone(buzzer, toneFrequency, 1000);
  delay(200);
  noTone(buzzer);
  delay(500);
  setColorForTone(toneFrequency);

  toneFrequency = 300;
  tone(buzzer, toneFrequency, 1000);
  delay(200);
  noTone(buzzer);
  delay(200);
  setColorForTone(toneFrequency);

  toneFrequency = 400;
  tone(buzzer, toneFrequency, 1000);
  delay(200);
  noTone(buzzer);
  delay(500);
  setColorForTone(toneFrequency);

  delay(500); 
}

void setColorForTone(int frequencia)
{
  int red = 0;
  int green = 0;
  int blue = 0;

  if (frequencia <= 100)
  {
    red = 255;
    green = 0;
    blue = 255;
  }
  else if (frequencia == 300)
  {
    red = 300; 
    green = 520; 
  }
  else if (frequencia >= 400)
  {
    red = 255; 
    green = 100;
    blue = 150;
  }
  else if (frequencia ==250)
  {
    red=700;
    green=150;
    blue=220;
  }
  else if (frequencia ==200)
  {
    red=500;
    green=900;
    blue=10;
  }

  
  red = constrain(red, 0, 255);
  green = constrain(green, 0, 255);
  blue = constrain(blue, 0, 255);

  analogWrite(pinR, red);
  analogWrite(pinG, green);
  analogWrite(pinB, blue);
}