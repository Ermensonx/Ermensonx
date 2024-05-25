#include <Servo.h> 

int cm = 0; // Variável para armazenar a distância em centímetros

// Função para medir a distância com o sensor de distancia
long readUltrasonicDistance(int triggerPin, int echoPin) {
  pinMode(triggerPin, OUTPUT); // Configura o pino de trigger como saída
  digitalWrite(triggerPin, LOW); 
  delayMicroseconds(2); // Pequeno atraso
  digitalWrite(triggerPin, HIGH); 
  delayMicroseconds(10);// Pequeno atraso
  digitalWrite(triggerPin, LOW); 
  pinMode(echoPin, INPUT); 
  return pulseIn(echoPin, HIGH); 
}

Servo servo_12; 

void setup() {
  servo_12.attach(12, 500, 2500);
}

void loop() {
  // Verifica se a distância medida é menor que 70 cm
  if (0.01723 * readUltrasonicDistance(7, 7) < 70) {
    servo_12.write(90); // Move o servo para 90 graus
  } else {
    servo_12.write(0); // Move o servo para 0 graus
  }
  delay(10); // Pequeno atraso para melhorar a simulação
}
