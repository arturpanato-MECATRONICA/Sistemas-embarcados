const int led_vermelho = 8;
const int led_verde = 9;
const int led_amarelo = 10;
const int led_branco = 11

const int pin_botaoA = 6;
const int pin_botaoB = 7;

bool botaoA;
bool botaoB;

void setup() {
  pinMode(pin_botaoA, INPUT_PULLUP);
  pinMode(pin_botaoB, INPUT_PULLUP);

  pinMode(led_vermelho, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_branco, OUTPUT);

  Serial.begin(115200);
}

void loop() {

  botaoA = digitalRead(pin_botaoA);
  botaoB = digitalRead(pin_botaoB);

  // LED vermelho (A e B)
  if (botaoA == LOW && botaoB == LOW) {
    digitalWrite(led_vermelho, HIGH);
  } else {
    digitalWrite(led_vermelho, LOW);
  }

  // LED verde (A ou B)
  if (botaoA == LOW || botaoB == LOW) {
    digitalWrite(led_verde, HIGH);
  } else {
    digitalWrite(led_verde, LOW);
  }

  // LED amarelo (A XOR B)
  if ((botaoA == LOW && botaoB == HIGH) || (botaoA == HIGH && botaoB == LOW)) {
    digitalWrite(led_amarelo, HIGH);
  } else {
    digitalWrite(led_amarelo, LOW);
  }
}