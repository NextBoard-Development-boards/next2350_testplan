#include <Arduino.h>

// Pino do LED de testes (Ajuste o número com o Léo depois!)
#define LED_PIN 25 

void setup() {
  // Inicializa a comunicação serial via USB
  Serial.begin(115200);
  
  // Configura o pino do LED como saída
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Pisca o LED
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
  
  // Envia uma mensagem para o computador do cliente
  Serial.println("Next2350 rodando perfeitamente!");
}
