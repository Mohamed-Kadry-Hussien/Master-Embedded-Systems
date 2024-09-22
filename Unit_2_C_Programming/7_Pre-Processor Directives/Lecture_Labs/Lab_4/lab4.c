/*
======================================================================================================================
 Name        : Lab_3
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 21/8/2024
 Description : Unit 2 C-Programming >>Pre-Processor Directives>>Lab_3 
 ======================================================================================================================
*/

#include <stdio.h>
void usa();
void india();

// Method one
//#pragma startup india 105
//#pragma startup usa
//#pragma exit usa
//#pragma exit india 105


// Method two

void __attribute__ ((constructor)) usa(); // == startup
void __attribute__ ((constructor)) india();
void __attribute__ ((destructor)) usa(); // == exit
void __attribute__ ((destructor)) india(); // == exit


int main(void)
{
    printf("I'm in main\n");
    return 0;
}

void usa ()
{
    printf("I'm in usa\n");
}

void india ()
{
    printf("I'm in india\n");
}