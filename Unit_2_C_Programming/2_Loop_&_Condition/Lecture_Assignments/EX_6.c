/*
 ======================================================================================================================
 Name        : EX6_Calculate sum of Natural Numbers
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Progtamming >> C-Basic >> Assignment_2 >>Ex_6 using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum =0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum:%d",sum);
}
