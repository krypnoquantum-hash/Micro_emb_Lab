void main() {
  TRISB=0x00;
  PORTB=0x00;
  while(1){
    PORTB = 0b00000001;
    Delay_ms(250);
    PORTB = 0b00000000;
    Delay_ms(250);
  }
}

