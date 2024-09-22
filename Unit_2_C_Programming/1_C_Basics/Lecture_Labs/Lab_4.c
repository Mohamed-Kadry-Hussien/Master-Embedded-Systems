/*
 ======================================================================================================================
 Name        : Calculate the Summation of values between 1 and 99
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Programming >> C-Basic >> Lab_4
 ======================================================================================================================
 */
#include <stdio.h>


int main(void)
{
    int i,sum=0;
	for(i=1;i<=99;i++)
	{
		sum+=i;  //sum=sum+i
	}

	printf("the Summation of values between 1 and 99 equal %d ",sum);

}
