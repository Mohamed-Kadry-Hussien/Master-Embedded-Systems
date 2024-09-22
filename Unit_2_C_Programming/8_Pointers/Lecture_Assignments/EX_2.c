/*
======================================================================================================================
 Name        : EX2_
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 27/8/2024
 Description : Unit 2 C-Programming >>Pointer>>Assignments>>EX_2 
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
    int alph[27];
    int* ptr;
    ptr=alph;       /*pointer point to first element of array*/
    int i;
    for(i=0;i<26;i++)
    {
        *ptr='A'+i ;
        ptr++;      /* equivalent to (ptr = ptr + size of data type(ptr) */
    }
    ptr=alph;       /*return pointer  point to first element of array*/
    printf("The Alphabets are : ");

    for(i=0;i<26;i++)
    {
      printf("%C\t",*ptr);
      ptr++;
    }



  return 0;
}
