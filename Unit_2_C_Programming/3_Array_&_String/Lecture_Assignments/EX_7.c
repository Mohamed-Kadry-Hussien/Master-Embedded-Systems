/*
 ======================================================================================================================
 Name        : EX_7_Add an element in an array
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 31/7/2024
 Description : Unit 2 C-Programming >>Array&string >> assignments >> EX_7
 ======================================================================================================================
*/

#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(void)
{
   int arr [SIZE];
   int inserted_element;
   int n_of_elements;
   int i = 0,j=0;
   int location ;

   printf("Enter the number of elements : ");
   fflush(stdin);
   fflush(stdout);
   scanf("%d",&n_of_elements);

   printf("Enter the elements : ");
   for (int i=0;i<n_of_elements;i++)
   {
        scanf("%d",&arr[i]);
   }

   printf("Enter the inserted_element: ");
   fflush(stdin);
   fflush(stdout);
   scanf("%d",&inserted_element);

   printf("Enter the location of inserted element: ");
   fflush(stdin);
   fflush(stdout);
   scanf("%d",&location);
   for(int i=n_of_elements;i>(location-1);i--)
   {
       arr[i]=arr[i-1];
   }


   for (int i=0;i<n_of_elements+1;i++)
   {
        if(i==location-1)
        {
            arr[i]=inserted_element;
        }
   }
   printf("the array after add element:\n");
   for(int i=0;i<n_of_elements+1;i++)
   {
     printf("%d   ",arr[i]);
   }
   return 0;
}
