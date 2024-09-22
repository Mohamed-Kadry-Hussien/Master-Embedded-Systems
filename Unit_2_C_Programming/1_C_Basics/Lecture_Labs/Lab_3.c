/*
 ======================================================================================================================
 Name        : Calculate the Minimum of Two Numbers
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Programming >> C-Basic >> Lab_3
 ======================================================================================================================
 */
#include <stdio.h>


int main(void)
{
	float num_1,num_2;
		printf("Enter the two numbers:");
		fflush(stdin);
		fflush(stdout);
		scanf("%f %f",&num_1,&num_2);
		if(num_1<num_2)
		{
			printf("the minimum number is %f",num_1);
		}
		else
		{
			printf("the minimum number is %f",num_2);
		}


}
