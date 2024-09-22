/*
======================================================================================================================
 Name        : Lab_1
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 21/8/2024
 Description : Unit 2 C-Progtamming >>Pre-Processor Directives>>Lab_1  
 ======================================================================================================================
 */

#include <stdio.h>
#include <time.h>
int main()
{
    clock_t start_time,end_time,diff;
    start_time = clock();
    int num_1,num_2,sum;

    printf("Enter the first number\n");
    num_1=5;
    printf("Enter the second number\n");
    num_2=10;
    sum=num_1+num_2;
    printf("The sum of the first number and second number is %d",sum);

    end_time = clock();
    diff=end_time-start_time;
    double taken_time =(double)diff/CLOCKS_PER_SEC ;
    printf("\nthe time taken is %0.7f",taken_time);
    return 0;

}
