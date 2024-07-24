/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Add_Two_Integers.c
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Progtamming >> C-Basic >> Assignment_1 >>Ex_3 using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>


int main(void)
{
   int num_1,num_2,sum;
   fflush(stdin);fflush(stdout);
   printf("Enter the two numbers");
   fflush(stdin);fflush(stdout);
   scanf("%d %d",&num_1,&num_2);
   sum= num_1+num_2;
   printf("sum:%d",sum);

}
