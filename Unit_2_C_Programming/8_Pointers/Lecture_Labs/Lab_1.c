/*
======================================================================================================================
 Name        : Lab_1_Average of Weight.
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/8/2024
 Description : Unit 2 C-Programming >>Pointer>>Lab_1 
 ======================================================================================================================
 */
#include <stdio.h>
#define  size 5
int main()
{
    int arr[size];
    int sum =0;
    int i;
    int *Parr=arr;
    printf("Please enter the elements\n");
    for(i=0;i<size;i++)
        scanf("%d",Parr+i);
    puts("");
    int j;
    printf("the elements are:\n");
    for (j=0;j<size;j++)
        printf("%d\t",*Parr+j);
    puts("");
    int k;
    for(k=0;k<size;k++,Parr++)
        sum+=*Parr;
    printf("the sum = %d",sum);
    return 0;
}