/*
 ======================================================================================================================
 Name        : EX1_Write C Program to Check whether a Number is Even or Odd
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Programming >> C-Basic >> Assignment_2 >>Ex_1
 ======================================================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter an integer number to check(even or ood) : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("the number(%d) is even",num);
    }
    else if (num%2!=0)
    {
        printf("the number(%d) is ood",num);
    }
    else
    {
        printf("the number = zero");
    }
}
