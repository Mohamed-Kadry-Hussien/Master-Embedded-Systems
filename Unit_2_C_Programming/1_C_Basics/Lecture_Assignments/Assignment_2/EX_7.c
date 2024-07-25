/*
 ======================================================================================================================
 Name        : EX7_find the Factorial of a number
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Progtamming >> C-Basic >> Assignment_2 >>Ex_7 using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    unsigned long long int Factorial=1;
    printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num>0)
    {
        for(int i=1;i<=num;i++)
        {
           Factorial*=i;
        }
        printf("Factorial=%lu",Factorial);
    }
    else if (num==0)
    {
        Factorial=1;
        printf("Factorial=%lu",Factorial);
    }
    else
    {
        printf("Error!!! Factorial of negative number doesn't exist\n");
    }
}
