/*
 ======================================================================================================================
 Name        : calculates the average students degree for any given students number
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Progtamming >> C-Basic >> Lab_5 using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>


int main(void)
{
    int num_of_students,sum_of_degrees=0;
    float degree,average;
    printf("Enter the number of student :");
    fflush(stdin); fflush(stdout);
    scanf("%d",&num_of_students);

	for(int i=1;i<=num_of_students;i++)
	{
	    printf("Enter the degree of student(%d) :\n",i);
	    fflush(stdin);fflush(stdout);
	    scanf("%f",&degree);
	    sum_of_degrees+=degree;

	}
	average=sum_of_degrees/num_of_students;
	printf("the Average students degree equal %f",average);


}
