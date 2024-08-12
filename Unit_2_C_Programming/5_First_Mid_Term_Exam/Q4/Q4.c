/*
 ======================================================================================================================
 Name        :   * --------------------------------------------------
                 * Question Number: 4
                 * Required: c function to revers digits in number
                 * ex1: input:2457 -> output: 7542
                 * ex2: input:1057 -> output: 7501
                 * ---------------------------------------------------
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

// Function prototype (declaration) for counter digits
int counter_digits(int num);

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("the reverse number of (%d) equal %d",num,reverse_digits(num));
    return 0;
}

// Function definition for reverse digits
int reverse_digits(int num)
{
        static unsigned int sum =0; // to save the last value of sum when call  fun again
        int last_number =num%10;
        int counter =counter_digits(num); //calculate the number of digits
        sum+=(last_number*pow(10,counter-1)); // the last number with your specific power
        num/=10;  // to shiif to left in number

    if(num==0) // mean the number is end
        return sum;
    else
        reverse_digits(num);
}
// Function definition for counter digits
int counter_digits(int num )
{
    int counter =0;

    while(num!=0)
    {
        counter++;
        num=num/10;
    }
    if(counter >0)
         return counter;
    else
         return 0;

}
