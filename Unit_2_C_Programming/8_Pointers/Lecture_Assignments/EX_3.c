/*
======================================================================================================================
 Name        : EX_3
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 27/8/2024
 Description : Unit 2 C-Programming >>Pointer>>Assignments>>EX_3 using ANSI-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
  char str[50];
  char rev_str[50];
  char* Pstr =str ;
  char* Prev_str =rev_str;

  printf("Pointer : Print a string in reverse order :\n");
  printf("---------------------------------------------\n");
  printf("Input a string : ");
  scanf("%s",str);
  int length =strlen(str); /*number of character */
  int i;
  for(i=1;i<length;i++)
  {
      Pstr++; /* in the end of loop pstr point to last character in the string */
  }

  for(i=1;i<=length;i++)
  {
      *Prev_str=*Pstr;
      Pstr--;
      Prev_str++;

  }
  *Prev_str='\0';
  printf("Reverse of the string is : ");

  printf("%s",rev_str);


  return 0;
}
