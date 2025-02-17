int main() {
  DDRB = 0B00100000;
  while (1)
  {
  PORTB = 0B00100000;
  PORTB = 0B00000000;
  }
}
