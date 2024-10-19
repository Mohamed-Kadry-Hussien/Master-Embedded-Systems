/***************Startup.s***************/
/**************Cortex-M3**************/

 .section .vectors
.word 0x20001000       /* 1 Stack Top Address         */
.word _reset           /* 1 reset handler             */
.word Vector_handler   /* 2 NMI handler               */
.word Vector_handler   /* 3 Hard_Fault handler        */
.word Vector_handler   /* 4 MM handler                */
.word Vector_handler   /* 5 Bus handler               */
.word Vector_handler   /* 6 Usage handler             */
.word Vector_handler   /* 7 RESERVED                  */
.word Vector_handler   /* 8 RESERVED                  */
.word Vector_handler   /* 9 RESERVED                  */
.word Vector_handler   /* 10 RESERVED                 */
.word Vector_handler   /* 11 SV handler               */
.word Vector_handler   /* 12 Debug reerved handler    */
.word Vector_handler   /* 13 RESERVED                 */
.word Vector_handler   /* 14 Pend SV handler          */
.word Vector_handler   /* 15 SysTick handler          */
.word Vector_handler   /* 16 IRQ0 handler             */
.word Vector_handler   /* 17 IRQ1 handler             */
.word Vector_handler   /* 18 IRQ2 handler             */
.word Vector_handler   /* 19 ............             */
/* ON TO IRQ67  */
.section .text
_reset :
	bl main
	b .
.thumb_func
Vector_handler :
	b _reset	