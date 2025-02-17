void setup() {
  DDRB = 0B00100000;
}

void loop() {
  PORTB = 0B00100000;
  PORTB = 0B00000000;
}
