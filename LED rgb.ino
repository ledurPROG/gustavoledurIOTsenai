#define R 4
#define G 2
#define B 3

void setup()
{
    pinMode(R, OUTPUT);
    pinMode(G, OUTPUT);
    pinMode(B, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
   
    analogWrite(R, 200);
    analogWrite(G, 0);
    analogWrite(B, 100);
    Serial.println("Essa cor e rosa"); 
    delay(2000); 

    
    analogWrite(R, 0);
    analogWrite(G, 0);
    analogWrite(B, 100);
    Serial.println("Essa cor e azul"); 
    delay(2000); 

    analogWrite(R, 239);
    analogWrite(G, 184);
    analogWrite(B, 16);
    Serial.println("Essa cor e amarelo"); 
    delay(2000); 
  
  	
}
