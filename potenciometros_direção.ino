void setup() {
    Serial.begin(9600);
}

void loop() {
    int eixoX = analogRead(A0);
    int eixoY = analogRead(A1);

    // Definindo os limites
    int limiteSuperior = 768; 
    int limiteInferior = 256;  

    // Lógica para Eixo Y
    if (eixoY > limiteSuperior) {
        Serial.println("Para cima");
    } else if (eixoY < limiteInferior) {
        Serial.println("Para baixo");
    } else {
        Serial.println("Eixo Y neutro");
    }

    // Lógica para Eixo X
    if (eixoX > limiteSuperior) {
        Serial.println("Para direita");
    } else if (eixoX < limiteInferior) {
        Serial.println("Para esquerda");
    } else {
        Serial.println("Eixo X neutro");
    }

    delay(500); 
}
