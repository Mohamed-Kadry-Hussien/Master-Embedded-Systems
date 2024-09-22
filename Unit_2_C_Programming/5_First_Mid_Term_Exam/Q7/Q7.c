/*
 ======================================================================================================================
 Name        :  * ------------------------------------------------------------------------
                * Question Number: 7
                * Required: c function to sum numbers from 1 to 100(without loop)
                * sum = 5050
                * ------------------------------------------------------------------------
 Author      : Eng. Mohamed Kadry Hussien
 Created on	 : 12/8/2024
 Description : Unit 2 C-Programming >> MidTerm 
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototype (declaration) for sum
int sum (int num_1,int num_2);

int main()
{

    int start_number, end_number;


	printf("Enter the Start number: ");
	scanf("%d",&start_number);

	printf("Enter the End number: ");
	scanf("%d",&end_number);

    printf("%d",sum(start_number,end_number));

}

// Function definition for sum
int sum ( int num_1,int num_2)
{

   if(num_1>num_2)
    {
       return 0;
    }
    else
       return num_1+sum(num_1+1,num_2);

}
