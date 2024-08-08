/*
 ======================================================================================================================
 Name        : EX_2_calculates the factorial of a specific number entered by the user using recursion .
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 9/8/2024
 Description : Unit 2 C-Programming >>Functions>>Ex_2 using ANSI-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
int factorial(int num);
int main(void)
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("the factorial of (%d) equal %d",num,factorial(num));

    return 0;
}
int factorial(int num)
{
    int f=1;
    for(int i=num;i>=1;i--)
    {
        f*=i;
    }
    return f;
}
