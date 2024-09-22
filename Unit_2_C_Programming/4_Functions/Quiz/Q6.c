/*
 ======================================================================================================================
 Name        : Q6_get the nth least significant bit.
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 9/8/2024
 Description : Unit 2 C-Programming >>Functions>>Quiz >> Q6 
 ======================================================================================================================
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char Find_nth_Least_Significant_Bit(int number,int postion);

int main()
{
	int num , bit_value,position;

	printf("Enter the number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("Enter the postion to find significant: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&position);

	bit_value = Find_nth_Least_Significant_Bit(num,position);

	printf("%d th Least Significant Bit = %d\n",position,bit_value);

	return 0;
}

char Find_nth_Least_Significant_Bit(int number,int position)
{
	number &= (1 << (position-1));

	/*
	 * ex: number = 15 --> 0000 1111
	 * Steps:
	 * 		1st_step: (1 << n-1) = (1 << 3) = (0000 1000)
	 * 		2nd_step: number = number & (1 << 3)
	 * 				0000 1111
	 * 			  & 0000 1000
	 * 			  _____________
	 * 			  = 0000 1000 	 != 0
	 *then bit_value = 1
	 */

	if(number == 0)
		return 0;
	else
		return 1;
}
