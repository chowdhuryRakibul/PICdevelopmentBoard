#include <main.h>
#include "DS1307.c"
#define LCD_ENABLE_PIN PIN_D2
#define LCD_RS_PIN PIN_D0
#define LCD_RW_PIN PIN_D1
#define LCD_DATA4 PIN_D4
#define LCD_DATA5 PIN_D5
#define LCD_DATA6 PIN_D6
#define LCD_DATA7 PIN_D7
#include <lcd.c>


#define DS1307_WRITE_ADDRESS  0xD0
#define DS1307_READ_ADDRESS   0xD1

unsigned char second;
unsigned char minute;
unsigned char hour;
unsigned char day;
unsigned char month;
unsigned char year;
unsigned char day_of_week;

void main()
{
  

  
   // TODO: USER CODE!!
   lcd_init();
   lcd_putc("\f   RTC DEMO\n");
   delay_ms(1000);

   ds1307_init();

   // Set date -> 05 July 2006 Wednesday (3rd day of week)
   // Set time -> 18:20:45
   ds1307_set_date_time(05, 07, 17, 3, 18, 20, 45);
   while(TRUE)
   {
      ds1307_get_date(day, month, year, day_of_week);
      ds1307_get_time(hour, minute, second);

      printf(lcd_putc,  "\fDate: \%02d/\%02d/\%02d\n", day, month, year);
      printf(lcd_putc,  "Time: \%02d:\%02d:\%02d",  hour, minute, second);
      delay_ms(1000);
     
   }

}
