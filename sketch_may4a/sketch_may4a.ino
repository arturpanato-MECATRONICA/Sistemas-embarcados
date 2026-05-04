const int ledPin = 9;
const int interruptPin = 2;
bool state = LOW;


void setup() {
pinMode(ledPin, OUTPUT);
pinMode(interruptPin, INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(interruptPin), blink, FALLING);
pinMode(interruptPin, INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(interruptPin), blink, FALLING);

}

void loop() {
  digitalWrite(ledPin, state);

  void liga() {
  digitalWrite(ledPin, state);
}
void blink() {
  state = !state;
}

