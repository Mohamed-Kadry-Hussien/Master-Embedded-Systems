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

typedef volatile unsigned int vuint32_t ;
typedef union
{
	vuint32_t all_fields ;
	struct
	{
		vuint32_t reserved:13;
		vuint32_t pin13:1;
	}pin;

}R_ODR;

volatile R_ODR* PR_ODR =(volatile R_ODR*)(PORTA_BASE+0X0C);

int main(void)
{

	RCC_APB2ENR |= 1<<2 ;
	GPIOA_CRH   &=0XFF0FFFFF ;
	GPIOA_CRH   |=0X00200000 ;

	while(1)
	{
		int i;
		PR_ODR->pin.pin13=1;
		for(i=0;i<5000;i++);
		PR_ODR->pin.pin13=0;
		for(i=0;i<5000;i++);
	}


  return 0 ;
}
