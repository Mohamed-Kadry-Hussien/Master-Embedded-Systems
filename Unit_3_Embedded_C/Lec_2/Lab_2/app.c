/*************app.c**************/
#include "uart.h"
unsigned char string_buffer[100]="Learn-in-Depth:<Mohamed Kadry>";
void main(void)
{
 //VersatilepB Physical Board
 Uart_Send_String(string_buffer); //send first element of array
}
