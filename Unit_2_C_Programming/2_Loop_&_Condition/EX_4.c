/*
 ======================================================================================================================
 Name        : EX4_Check whether a Number is Positive or Negative
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Programming >> C-Basic >> Assignment_2 >>Ex_4
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   signed int num ;
   printf("Enter the number :");
   scanf("%d",&num);
   if(num>0)
   {
       printf("\n%d is postive",num) ;
   }
   else if(num<0)
   {
       printf("\n%d is negative",num) ;

   }
   else
   {
       printf(" number equal zero") ;
   }


}
