#define F_CPU 1000000UL

#include <util/delay.h>
#include <avr/io.h>
#include <stdint.h>

int main(void)
{
  DDRB = 0xff;
  PORTB = 0x01;
  while (1)
  {
    PORTB << 1;
    delay_ms(100);
  }
}
