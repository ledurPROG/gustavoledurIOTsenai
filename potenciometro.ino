void setup() {
    Serial.begin(9600);
}

void loop() {
    int eixoX = analogRead(A0);
    int eixoY = analogRead(A1);
    
    Serial.print("Eixo X: ");
    Serial.print(eixoX);
    Serial.print(" | Eixo Y: ");
    Serial.println(eixoY);

    delay(500); // Aguarda meio segundo antes da próxima leitura
}
