/*
 ======================================================================================================================
 Name        : Q3_reverse the elements of an array entered by the user.
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 9/8/2024
 Description : Unit 2 C-Programming >>Functions>>Quiz >> Q3 using ANSI-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
int main(void)
{
    int size;
    int arr[100];
    int reverse[100];
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the array :");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array before reverse:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
    int j;
    int i;
    for(i=size-1, j=0; j<size; i--,j++)
    {
        reverse[j]=arr[i];
    }
    printf("\n");
    printf("the array after reverse:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t",reverse[i]);
    }
    printf("\n");

}
