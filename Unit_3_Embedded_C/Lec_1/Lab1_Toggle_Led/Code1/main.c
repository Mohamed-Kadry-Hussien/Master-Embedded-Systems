/*
======================================================================================================================
 Name        : Lab1_Toggle_Led
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 3/9/2024
 Description : Unit-3-Embedded-C >>Lecture1>>Lab1
 ======================================================================================================================
 */

#include <stdint.h>
#define RCC_BASE    0X40021000
#define PORTA_BASE  0X40010800

#define RCC_APB2ENR *((volatile  uint32_t*)(RCC_BASE + 0X18))
#define GPIOA_CRH   *((volatile  uint32_t*)(PORTA_BASE + 0X04))
#define GPIOA_ODR   *((volatile  uint32_t*)(PORTA_BASE + 0X0C))

int main(void)
{
	RCC_APB2ENR |= 1<<2 ;  //SET BIT2
	GPIOA_CRH   &=0XFF0FFFFF ; //RESET BITS
	GPIOA_CRH   |=0X00200000 ; //SET

	while(1)
	{
		GPIOA_ODR |=1<<13;  //SET BIT 13
		int i;
		for(i=0;i<8000;i++);
		GPIOA_ODR &= ~(1<<13);  //CLEAR BIT 13
	    for(i=0;i<8000;i++);
	}


  return 0 ;
}
