#include <main.h>

#INT_TIMER2
void  TIMER2_isr(void) 
{

}

void main()
{
	setup_timer_2(T2_DIV_BY_16,8,6);		//28.8 us overflow, 172 us interrupt

	setup_ccp1(CCP_PWM);
	set_pwm1_duty((int16)10);

	enable_interrupts(INT_TIMER2);
	enable_interrupts(GLOBAL);

	while(TRUE)
	{
		//TODO: User Code
	}

}
