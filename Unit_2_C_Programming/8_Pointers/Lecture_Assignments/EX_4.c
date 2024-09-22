/*
======================================================================================================================
 Name        : EX_4
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 27/8/2024
 Description : Unit 2 C-Programming >>Pointer>>Assignments>>EX_4 
 ======================================================================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
  int arr[15];
  int n_of_element;
  int* Parr;
  Parr=&arr[0];
  printf("Input the number of elements to store in the array (max 15): ");
  scanf("%d",&n_of_element);
  printf("Input 5 number of elements in the array : \n");
  int i ;
  for(i=0;i<n_of_element;i++)
  {
      printf("element - %d : ",i+1);
      scanf("%d",Parr);
      if(i<(n_of_element-1))
      {
      Parr++;
      }
  }
  printf("The elements of array in reverse order are : \n");
  for(i=0;i<n_of_element;i++)
  {
      printf("element - %d : %d \n",i+1,*Parr);
      Parr--;
  }

  return 0;
}
