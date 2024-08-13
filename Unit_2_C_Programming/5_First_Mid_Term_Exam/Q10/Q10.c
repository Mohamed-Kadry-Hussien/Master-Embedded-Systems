/*
 ======================================================================================================================
 Name        :   * ---------------------------------------------------------------------
                 * Question Number: 10
                 * Required: c function to count the max number of ones between two zeros
                 * ex1: input:14(01110) ->output:3
                 * ex2: input:110(0110 1110) ->output:3
                 * ----------------------------------------------------------------------
 Author      : Eng. Mohamed Kadry Hussien
 Created on	 : 12/8/2024
 Description : Unit 2 C-Programming >> MidTerm using ANSI-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Function prototype (declaration) for reverse Words string
int max_number_of_ones(int num);

int main()
{
    int num;
    printf("Enter the number to calculate max number of ones :");
    scanf("%d",&num);
    printf("the max number of ones :%d",max_number_of_ones(num));
}

// Function definition for reverse Words string
int  max_number_of_ones(int num)
{
    int bit=0, counter = 0, max=0;

	while(num)
	{
		bit = num % 2;

		if(bit == 1)
		{
			counter++;
			if(counter >= max)
				max = counter;
		}
		else
			counter = 0;

		num /= 2;
	}

	return max;
}
