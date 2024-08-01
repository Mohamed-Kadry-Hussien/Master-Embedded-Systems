/*
 ======================================================================================================================
 Name        : EX_6_Search for an element in an array
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 31/7/2024
 Description : Unit 2 C-Progtamming >>Array&string >> assignments >> EX_6 using Ansi-style (c99)
 ======================================================================================================================
*/

#include <stdio.h>
#include <string.h> // To use only strlen() function
#define SIZE 100
void main(void)
{
   int arr [SIZE];
   int searched_element;
   int n_of_elements;
   int i = 0,j=0;
   int location =0;

   printf("Enter the number of elements : ");
   scanf("%d",&n_of_elements);

   printf("Enter the elements : ");
   for (int i=0;i<n_of_elements;i++)
   {
        scanf("%d",&arr[i]);
   }

   printf("Enter the searched_element: ");
   scanf("%d",&searched_element);

   for (int i=0;i<n_of_elements;i++)
   {
        if(arr[i]==searched_element)
        {
            location=i+1;
        }
   }
   if(location==0)
    printf("the element not found in array");
   else
    printf("the location of element(%d)is %d place",searched_element,location);


}
