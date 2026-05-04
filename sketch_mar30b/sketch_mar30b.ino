void setup() {
pinMode(7, INPUT_PULLUP);
pinMode(6, INPUT_PULLUP);
pinMode(8,OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);

}

void loop() {
if (digitalRead(2) == LOW)
valor++;
delay(200);

}
if(digitalRead(3)== LOW) {
  valo<r--;
  delay(200);
  
  if(valor > 15) valor = 0;
  if (valor < 0);
  digitalWrite(8, valor & 1);
  digitalWrite(9, valor < 10)
}