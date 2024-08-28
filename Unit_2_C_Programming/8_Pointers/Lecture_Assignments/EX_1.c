/*
======================================================================================================================
 Name        : EX1_ Write a program in C to print a string in reverse using a pointer.
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 27/8/2024
 Description : Unit 2 C-Progtamming >>Pointer>>Assignments>>EX_1 using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
  int m;
  int* ab ;
  m=29;
  printf("Address of m : %x\n",&m);
  printf("Value of m : %d\n",m);
  ab=&m;
  printf("Now ab is assigned with the address of m.\n");
  printf("Address of pointer ab : %x\n",ab);
  printf("Content of pointer ab : %d\n",*ab);
  m=34;
  printf("The value of m assigned to 34 now.\n");
  printf("Address of pointer ab : %x\n",ab);
  printf("Content of pointer ab : %d\n",*ab);
  *ab=7;
  printf("The pointer variable ab is assigned with the value 7 now.\n");
  printf("Address of m : %x\n",ab);
  printf("Value of m : %d\n",*ab);
  return 0;
}
