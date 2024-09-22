/*
======================================================================================================================
 Name        : Lab_3
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 21/8/2024
 Description : Unit 2 C-Programming >>Pre-Processor Directives>>Lab_3 
 ======================================================================================================================
 */
#include <stdio.h>
#define Fun(name,a)  int fun_##name(int x) {return a*x;}
Fun(Double,2)
Fun(Triple,3)
Fun(Quadrable,4)
int main()
{
    printf("Double(5) = %d\n",fun_Double(5));
    printf("Triple(5) = %d\n",fun_Triple(5));
    printf("Quadrable(5) = %d\n",fun_Quadrable(5));
    return 0;

}
