/*
 ======================================================================================================================
 Name        : EX3_find largest number among three numbers
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Programming >> C-Basic >> Assignment_2 >>Ex_3
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num_1,num_2,num_3;
	printf("Enter the three numbers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f",&num_1,&num_2,&num_3);
	if(num_1>num_2 && num_1>num_3)
	{
		printf("the grater number is %f",num_1);
	}
	else if(num_2>num_1&&num_2>num_3)
	{
		printf("the grater number is %f",num_2);
	}
	else
	{
		printf("the grater number is %f",num_3);
	}


}
