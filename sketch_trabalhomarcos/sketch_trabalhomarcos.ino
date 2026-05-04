const int botao1 = 2;
const int botao2 = 3;
const int ledmotor = 9;
const int ledverificar = 10;

int contagem = 0;
bool sistemaon= false;
bool sistemaoff = false;

int estado1 = HIGH;
int estado2 = HIGH;

unsigned long tempoanteriorpisca = 0;
const unsigned long intervalopisc = 600;
bool estadoledver = false;

void setup() {
pinMode(botao1, INPUT_PULLUP);
pinMode(botao2, INPUT_PULLUP);
pinMode(ledmotor, OUTPUT);
pinMode(ledverificar, OUTPUT);

digitalWrite(ledmotor, LOW);
digitalWrite(ledverificar, LOW);

Serial.begin(9600);
Serial.println("sistema bobinamento");
Serial.println("iniciar");
}



void loop() {
int inicio = digitalRead(botao1);
int contagem = digitalRead(botao2);

if (estado1 == HIGH && estado2 == LOW);{
contagem = 0;
sistemaon = true;
sistemaoff = false;

digitalWrite(ledmotor, HIGH);
digitalWrite(ledverificar, LOW);
estadoledver = false;

Serial.println("novo ciclo iniciado");
Serial.print("contagem");
Serial.println("contagem");
}
delay (50)


if (estado1 == HIGH && estado2 == LOW);{
contagem++;
Serial.print("contagem: ");
Serial.println(contagem);

delay (50)

}