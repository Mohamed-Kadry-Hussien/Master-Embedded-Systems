/*
 ======================================================================================================================
 Name        : Q7_Check if the given number is a power of 3.
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 9/8/2024
 Description : Unit 2 C-Programming >>Functions>>Quiz >> Q7 
 ======================================================================================================================
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int Is_Number_of_Power_3(int number);

int main()
{
	int num;

	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	if(	 Is_Number_of_Power_3(num))
        printf("true");
    else
        printf("false");

	return 0;
}

int Is_Number_of_Power_3(int number)
{
	double result;

	result =number%3;

	if(result ==0)
		return 1;
	else
		return 0;

}
