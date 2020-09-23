//#include <main.h>

#include <18F4550.h>
#fuses NOMCLR INTRC_IO
#use delay(clock=8000000)
void main()
{
   SET_TRIS_D( 0xFF );
   int bit = 0;
   int i = 0;
   
   while(TRUE)
   {
      for(i = 0;i<8;i++)
         {
            bit = 1<<i;
             output_d(~bit);
             delay_ms(500);
         }
   }

}
