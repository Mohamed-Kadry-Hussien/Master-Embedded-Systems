/*
 ======================================================================================================================
 Name        : Q8_Find the index of Last occurrence of a number in a given array
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 9/8/2024
 Description : Unit 2 C-Programming >>Functions>>Quiz >> Q8 using ANSI-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int Last_Occurrence(int a[], int number, int size);

int main()
{
	int arr[] = {1,2,3,4,5,2,1,2,1}; //9 element
	int num , index, size_array;

	size_array = sizeof(arr)/4; //size of int ==4

	printf("Enter the number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	index = Last_Occurrence(arr,num,size_array);

	printf("Array: \n");
	for(int i = 0; i < size_array; i++)
		printf("%d ",arr[i]);

	printf("\nresult = %d\n",index); //1 to 9

	return 0;
}

int Last_Occurrence(int a[], int number, int size)
{
	int last_occurrence = 0;

	for(int i = 0; i < size; i++)
	{
		if(a[i] == number)
			last_occurrence = i+1;
	}

	return last_occurrence;

}
