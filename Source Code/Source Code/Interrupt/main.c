#include <main.h>

#INT_EXT
void  EXT1_isr(void) 
{
   output_toggle(PIN_D6); 
   delay_ms(10); // Debounce delay 
   clear_interrupt(INT_EXT1);
   
}

#INT_EXT1
void  EXT2_isr(void) 
{
   output_toggle(PIN_D7); 
   delay_ms(10); // Debounce delay
   clear_interrupt(INT_EXT2);
   
}

void main()
{
   setup_spi(FALSE); 
   enable_interrupts(GLOBAL);
   ext_int_edge(H_TO_L);
   ext_int_edge(1,H_TO_L);
   clear_interrupt(INT_EXT);
   clear_interrupt(INT_EXT1);
   enable_interrupts(INT_EXT);
   enable_interrupts(INT_EXT1);
   

   while(TRUE)
   {
      //output_low(PIN_D6);
      //output_low(PIN_D7);
   }

}
