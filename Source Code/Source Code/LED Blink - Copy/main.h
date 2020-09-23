#include <18F4550.h>
#device ADC=16

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES WDT128                	//Watch Dog Timer uses 1:128 Postscale
#FUSES NOLPT1OSC             	//Timer1 configured for higher power operation
#FUSES RSS2048               	//Medium sized secure RAM
#FUSES NOWRTB                	//Boot block not write protected
#FUSES NOWRTC                	//Configuration registers not write protected
#FUSES SDOC7                 	//SDO is on RC7
#FUSES BORV43                	//Brownout reset at 4.3V
#FUSES PLL_DIV_4             
#FUSES NODS                  	//Deep Sleep operation is always disabled
#FUSES HFOFST                	//High Frequency INTRC starts clocking CPU immediately
#FUSES NOLPT1OSC             	//Timer1 configured for higher power operation
#FUSES VREFNORM_CVREFNORM    	//VREF and CVREF are mapped to their default pins
#FUSES CCP2B5                	//CCP2 input/output multiplexed with RB5
#FUSES NOXINST               	//Extended set extension and Indexed Addressing mode disabled (Legacy mode)
#FUSES VREFALT_CVREFNORM     	//VREF is mapped to AVDD and AVSS; CVREF is mapped to default pins
#FUSES NOWRTC                	//Configuration registers not write protected
#FUSES NOWRTB                	//Boot block not write protected

#use delay(crystal=20000000)

