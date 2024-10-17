int ledPin = 13;      // Pino onde o LED está conectado
int potPin = A0;      // Pino do potenciômetro
int potValue = 0;     // Variável para armazenar o valor lido do potenciômetro
int delayTime = 0;    // Variável para o tempo de delay

void setup() {
  pinMode(ledPin, OUTPUT);  // Define o pino do LED como saída
}

void loop() {
  potValue = analogRead(potPin);   // Lê o valor do potenciômetro (0 a 1023)
  
  // Converte o valor lido para um intervalo de tempo adequado
  // Vamos mapear de 100ms a 1000ms (1 segundo)
  delayTime = map(potValue, 0, 1023, 100, 1000);
  
  // Liga o LED
  digitalWrite(ledPin, HIGH);
  delay(delayTime);  // Aguarda o tempo mapeado
  
  // Desliga o LED
  digitalWrite(ledPin, LOW);
  delay(delayTime);  // Aguarda o mesmo tempo antes de ligar novamente
}