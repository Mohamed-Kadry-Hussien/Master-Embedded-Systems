/*
 ======================================================================================================================
 Name        : EX_4_calculates the power of a number using recursion. The number will be entered
               by the userand then the power will be calculated and printed on the screen.
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 9/8/2024
 Description : Unit 2 C-Programming >>Functions>>Ex_4 
 ======================================================================================================================
 */
#include <stdio.h>
int power(int number, int toPower) ;
int main(void)
{
    int number, toPower ;

	printf ("Enter base number: ");
	scanf ("%d", &number);

	printf ("Enter power number(Positive integer): ");
	scanf ("%d", &toPower);
    printf("(%d) to power (%d) equal %d",number,toPower,power(number,toPower));
}
int power(int number, int toPower)
{
    if(toPower==0)
        return 1;
    else if(toPower==1)
        return number;
    else
        return (number*power(number,toPower-1));
}
