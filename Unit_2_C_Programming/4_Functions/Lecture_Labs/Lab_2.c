/*
 ======================================================================================================================
 Name        : lab2_Calculate the Minimum Value of any Given Array
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 7/8/2024
 Description : Unit 2 C-Progtamming >>Function >> lab2 using Ansi-style (c99)
 ======================================================================================================================
 */
#include<stdio.h>
#define size 50
 int calcMin(int values[], int n) ;

int main()
{
   int n;
   int arr[size];
   printf("Enter the number of element (values) :");
   scanf("%d",&n);
   printf("Enter the element (values) :");
   for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
   printf("the Minimum of values is %d",calcMin(arr,n));
}
 int calcMin(int values[], int n)
{
    int min =values[0];
    for(int i=0;i<n;i++)
    {
        if(min>values[i])
            min=values[i];
    }
    return min;
}
