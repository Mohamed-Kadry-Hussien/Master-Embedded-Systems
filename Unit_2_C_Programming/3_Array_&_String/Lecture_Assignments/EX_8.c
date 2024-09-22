/*
 ======================================================================================================================
 Name        : EX_8_ Reverse a string without using built-in functions
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 31/7/2024
 Description : Unit 2 C-Programming >>Array&string >> assignments >> EX_8
 ======================================================================================================================
*/

#include <stdio.h>
#include <string.h> // To use only strlen() function
#define SIZE 100
int main(void)
{
   char str [SIZE];
   char reverse_str [SIZE];
   int i = 0,j=0;
   printf("Enter the string: ");
   scanf("%s", str);

   int index = strlen(str);

   for (i = index - 1; i >= 0; i--)
   {
        reverse_str[j] = str[i];
        j++;
   }

   reverse_str[j] = '\0'; // Adding null terminator at the end

   printf("Reverse string is %s", reverse_str);
}
