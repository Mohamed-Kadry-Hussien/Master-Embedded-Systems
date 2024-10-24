/*************************************main.c*************************************/
/*************************************Tiva-C*************************************/

#include "PLATFORM_TYPES_H.h"

#define GPIOF_Base   0x40025000
#define SYSCTL_Base  0x400FE000
#define SYSCTL_RCGC2_R     (*((vuint32_t*)( SYSCTL_Base+0x108 )))
#define GPIO_PORTF_DIR_R   (*((vuint32_t*)( GPIOF_Base+0x400  )))
#define GPIO_PORTF_DEN_R   (*((vuint32_t*)( GPIOF_Base+0x51C  )))
#define GPIO_PORTF_DATA_R  (*((vuint32_t*)( GPIOF_Base+0x3FC  )))

int main ()
{
	vint32_t delay_counter ;   /*(volatile)To avoid Optimization(delete for loop)*/
	SYSCTL_RCGC2_R =0x20 ;
	for(delay_counter=0 ; delay_counter<200 ; delay_counter++);  /*Delay to Make Sure GPIOF is UP and Running*/
    GPIO_PORTF_DIR_R |= (1<<3) ; /* DIR is output for pin 3 port F */
    GPIO_PORTF_DEN_R |= (1<<3) ;

    while(1)
    {
        GPIO_PORTF_DATA_R |= (1<<3) ;
        for(delay_counter=0 ; delay_counter<200000 ; delay_counter++);
        GPIO_PORTF_DATA_R &=~(1<<3) ;
        for(delay_counter=0 ; delay_counter<200000 ; delay_counter++); 

    }
    return 0 ;	
}