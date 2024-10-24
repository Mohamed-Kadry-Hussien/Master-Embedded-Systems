/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    startup.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 * Author  : Mohamed Kadry hussien
 *
 */  

/************************************************************************************************************/
#include "PLATFORM_TYPES_H.h"
/*booking 1024 B located by .bss section in memory through unintialized array of int 256 element(256*4=1024)*/
static uint32_t STACK_TOP[256];

extern int main(void);

/************************************************************************************************************/

void Reset_Handler(void);

void Default_Handler()
{
	Reset_Handler();
}

void NMI_Handler(void)				__attribute__ ((weak, alias("Default_Handler")));;
void H_Fault_Handler(void)			__attribute__ ((weak, alias("Default_Handler")));;
void MM_Fault_Handler(void)			__attribute__ ((weak, alias("Default_Handler")));;
void Bus_Fault(void)				__attribute__ ((weak, alias("Default_Handler")));;
void Usage_Fault_Handler(void)		__attribute__ ((weak, alias("Default_Handler")));;

/********************************************************************************************/

void (* const g_p_fun_vectors[]) () __attribute__((section(".vectors"))) =
{
	(void(*)()) 	(STACK_TOP+sizeof(STACK_TOP)), /*Casting to avoid warning*/
	&Reset_Handler,
	&NMI_Handler,
	&H_Fault_Handler,
	&MM_Fault_Handler,
	&Bus_Fault,
    &Usage_Fault_Handler
};

/********************************************************************************************/

extern uint32_t _E_TEXT ;
extern uint32_t _S_DATA ;
extern uint32_t _E_DATA ;
extern uint32_t _S_BSS ;
extern uint32_t _E_BSS ;

/********************************************************************************************/

void Reset_Handler (void)
{
	/* copy data from ROM to RAM */
	uint32_t DATA_Size = (uint8_t*)&_E_DATA - (uint8_t*)&_S_DATA ;
	uint8_t* P_src = (uint8_t*)&_E_TEXT ;
	uint8_t* P_dst = (uint8_t*)&_S_DATA ;
	int j ;
	for (j = 0; j < DATA_Size; ++j)
		{
			*((uint8_t*)P_dst++) = *((uint8_t*)P_src++) ; 
		}

	/*  init the .bss with zero  */
	uint32_t BSS_Size = (uint8_t*)&_E_BSS - (uint8_t*)&_S_BSS ;
	P_dst = (uint8_t*)&_S_BSS ;

	for (j = 0; j < BSS_Size; ++j)
		{
			*((uint8_t*)P_dst++) = (uint8_t)0 ; 
		}

	main();   	/* Branch --> main */ 

}

/********************************************************************************************/