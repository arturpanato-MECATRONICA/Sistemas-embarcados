unsigned long tempo_anterior = 0;
const long intervalo = 1000; 
bool estado = false;
const int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  unsigned long tempo_atual = millis();

  if (tempo_atual - tempo_anterior >= intervalo) {
    tempo_anterior = tempo_atual; 

    estado = !estado; 
    digitalWrite(ledPin, estado);

    Serial.println("LED mudou de estado");
  }
}