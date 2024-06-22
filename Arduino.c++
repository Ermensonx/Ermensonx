
#include <Servo.h>

// Variáveis para os pinos do sensor ultrassônico
const int triggerPin = 7;
const int echoPin = 8;

// Variável para o servo motor
Servo servo_12;

// Função para medir a distância com o sensor ultrassônico
long readUltrasonicDistance(int triggerPin, int echoPin) {
  pinMode(triggerPin, OUTPUT); // Configura o pino de trigger como saída
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2); // Pequeno atraso
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10); // Pequeno atraso
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup() {
  // Inicializa a comunicação serial
  Serial.begin(9600);
  
  // Anexa o servo ao pino 12
  servo_12.attach(12, 500, 2500);
  
  // Configura os pinos do sensor ultrassônico
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Posição da lixeira com a tampa fechada
  servo_12.write(180);
}

void abrirLixeira(){
  if(servo_12.read() == 180) {
    // Abre a tampa
    servo_12.write(75);

    // Tempo em que a lixeira fica aberta
    delay(7000);

    // Fecha a tamp
    fecharLixeira();
  } else delay(7000);
}

void fecharLixeira() {
  if(servo_12.read() == 75) {
    int distancia = lerDistancia();

    //Fecha a tampa
    if (distancia > 20) servo_12.write(180);
  }
}

int lerDistancia(){
  // Lê a distância em microsegundos
  long duration = readUltrasonicDistance(triggerPin, echoPin);
  
  // Converte a duração para centímetros
  int cm = duration * 0.034 / 2;

  return cm;
}
void loop() {
  int distancia = lerDistancia();

  // Imprime a distância medida no monitor serial
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  
  if (distancia < 20) abrirLixeira();
  else fecharLixeira();

   // Intervalo entre leituras
   delay(100);
}
