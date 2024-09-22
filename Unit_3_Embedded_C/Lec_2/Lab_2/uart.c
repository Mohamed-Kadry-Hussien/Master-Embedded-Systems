/*************uart.c**************/
#include "uart.h"
/*UART registers*/
#define UART0DR   *((volatile unsigned int* const)((unsigned int*)0x101f1000))

void Uart_Send_String(unsigned char* P_tx_string)
{
    /*Loop until end of string*/
    while(*P_tx_string!='\0')
    {
        UART0DR=(unsigned int)(*P_tx_string);
        P_tx_string++; /*New Char*/
    }
}
