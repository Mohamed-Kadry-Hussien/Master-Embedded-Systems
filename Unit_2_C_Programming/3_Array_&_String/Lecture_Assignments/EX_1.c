/*
 ======================================================================================================================
 Name        : EX_1_Calculate an average
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 31/7/2024
 Description : Unit 2 C-Programming >>Array&string >> assignments>>EX_1
 ======================================================================================================================
 */


#include <stdio.h>
int main(void)
{
    int n;
    float sum=0;
    float average;

    printf("Enter numbers of data:");

    scanf("%d",&n);
    float data[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter number(%d):",i+1);
        scanf("%f",&data[i]);
        sum+=data[i];
    }
    average=sum/n;
    printf("the average of (%d)numbers = %5.2f",n,average);
}
