/*
 ======================================================================================================================
 Name        :    * -------------------------------------------------------------
                  * Question Number: 5
                  * Required: c function to count number of ones in binary number
                  * ex1: input:5 ->output: 2
                  * ex2:  input:15 ->output:4
                  * -------------------------------------------------------------
 Author      : Eng. Mohamed Kadry Hussien
 Created on	 : 12/8/2024
 Description : Unit 2 C-Programming >> MidTerm using ANSI-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototype (declaration) for reverse digits
int reverse_digits(int num);



int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("the number of ones in (%d) equal %d",num,number_of_ones(num));
    return 0;
}

// Function definition for reverse digits
int number_of_ones(int num)
{
    int counter =0;
    int result;
    printf("the number (%d) in binary  :\n",num);
    for(int i=16;i>=1;i--)
    {
        result=num>>(i-1);
        if(result&1)
        {
            printf("1\t");
            counter++;
        }
        else
            printf("0\t");
    }
    return counter;
}
