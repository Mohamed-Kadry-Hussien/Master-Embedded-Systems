/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Print_a_Integer_Entered_by_a_User.c
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Programming >> C-Basic >> Assignment_1 >>Ex_2
 ======================================================================================================================
 */

#include <stdio.h>


int main(void)
{
   int num;
   printf("Enter a integer:");
   fflush(stdin);
   fflush(stdout);
   scanf("%d",&num);
   printf("\nYou entered:%d",num);
   return 0;
}
