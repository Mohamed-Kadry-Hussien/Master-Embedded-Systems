/*
 ======================================================================================================================
 Name        :
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 12/8/2024
 Description : Unit 2 C-Programming >>MidTerm 
 ======================================================================================================================
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int sum_of_digits(int num);  //prototype(deceleration)

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int sum = sum_of_digits(num);
    printf("the sum of digits in (%d) equal %d",num,sum);
}
int sum_of_digits(int num)  //definition
{
    static unsigned int sum =0; // to save last value of variable (sum) when call function again
    int last_number;

    if(num!=0)
    {
        int last_number=num%10 ;
        sum+=last_number;
        sum_of_digits(num/10);
        return sum ;
    }
    else
        return 0;
}
