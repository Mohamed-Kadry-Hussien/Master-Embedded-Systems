/*
 ======================================================================================================================
 Name        : lab1_Calculate the Factorial
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 7/8/2024
 Description : Unit 2 C-Progtamming >>Function >> lab1 using Ansi-style (c99)
 ======================================================================================================================
 */

#include<stdio.h>

int CalcFactorial(int x);

int main()
{
    int num;
    printf("Entter the number:");
    scanf("%d",&num);
    printf("the Factorial of (%d) is %d",num,CalcFactorial(num));
    return 0;
}
int CalcFactorial(int x)
{
    int y=1;
    for(int i=x;i>0;i--)
    y*=i;
    return y;
}
