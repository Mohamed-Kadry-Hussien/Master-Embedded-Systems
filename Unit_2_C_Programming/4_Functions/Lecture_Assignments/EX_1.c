/*
 ======================================================================================================================
 Name        : EX_1_find and print the prime numbers between two intervals entered by the user
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 9/8/2024
 Description : Unit 2 C-Programming >>Functions>>Ex_1 using ANSI-style c99
 ======================================================================================================================
 */
#include <stdio.h>
int prime(int num);
int prime_between_two_numbers(int num_1,int num_2);

int main(void)
{
    int num_1,num_2;
    printf("Enter the two numbers\n");
    printf("First Number:");
    scanf("%d",&num_1);
    printf("Second Number:");
    scanf("%d",&num_2);
    printf("the prime numbers :");
    prime_between_two_numbers(num_1,num_2);
    return 0;
}
int prime(int num)
{
    int test=0;
    for(int i=num;i>=1;i--)
    {
        if(num%i==0)
            test++;
    }
    if(test==2)
        return num;
}
int prime_between_two_numbers(int num_1,int num_2)
{
    for(int i=num_1;i<num_2;i++)
    {
        int test=prime(i);
        if(test>1)
            printf("%d\t",i);
    }
}
