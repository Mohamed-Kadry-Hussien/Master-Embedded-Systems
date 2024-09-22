/*
 ======================================================================================================================
 Name        :   * ---------------------------------------------------------------
                 * Question Number: 8
                 * Required: c function to take an array and reverse its elements
                 * ex: input: a[5]={1,2,3,4,5}
                 * output:5 4 3 2 1
                 * ---------------------------------------------------------------
 Author      : Eng. Mohamed Kadry Hussien
 Created on	 : 12/8/2024
 Description : Unit 2 C-Programming >> MidTerm
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototype (declaration) for reverse_array
void reverse_array (int arr[],int size);

int main()
{

    int arr[30];
    int size;


	printf("Enter the size of array: ");
	scanf("%d",&size);

	printf("Enter the elements of array :\n");
	for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

	printf("the array before reverse :\n");
	for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

    puts("");
    reverse_array(arr,size);

    printf("the array after reverse :\n");
	for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

}

// Function definition for reverse_array
void reverse_array (int arr[],int size)
{
    int temp;
    int j;

    for(int i=0,j=size-1;i<j;j--,i++)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }

}
