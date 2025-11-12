void main() {
  TRISB = 0x00;
  PORTB = 0x00;
  while(1){
    unsigned int x=0;
    for(x=0;x<8;x++) {
      PORTB=(1<<x);
      delay_ms(100);
    }
  }
}