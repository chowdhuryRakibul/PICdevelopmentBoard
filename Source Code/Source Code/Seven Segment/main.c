#include <main.h>
#define disp1 PIN_A2
#define disp2 PIN_A1
#define disp3 PIN_A0
#define disp4 PIN_A3


void main()
{
  
   
      output_high(disp1);
      
      output_low(PIN_D0);
      delay_ms(500);
      output_low(PIN_D1);
      delay_ms(500);
      output_low(PIN_D2);
      delay_ms(500);
      output_low(PIN_D3);
      delay_ms(500);
      output_low(PIN_D4);
      delay_ms(500);
      output_low(PIN_D5);
      delay_ms(500);
      output_low(PIN_D6);
      delay_ms(500);
      output_low(PIN_D7);
      delay_ms(500);
      
      output_high(PIN_D0);
      output_high(PIN_D1);
      output_high(PIN_D2);
      output_high(PIN_D3);
      output_high(PIN_D4);
      output_high(PIN_D5);
      output_high(PIN_D6);
      output_high(PIN_D7);
      delay_ms(1000);
 
}
