/*
 ======================================================================================================================
 Name        : EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable(trick)
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Progtamming >> C-Basic >> Assignment_1 >>Ex_7 using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>


int main(void)
{
   float num_1,num_2;
   printf("Enter value of num_1: ");
   scanf("%f",&num_1);
   printf("\nEnter value of num_2: ");
   scanf("%f",&num_2);
   num_1=num_1+num_2;
   num_2=num_1-num_2;
   num_1=num_1-num_2;
   /*
   //another solution
   num_1=num_1*num_2;
   num_2=num_1/num_2;
   num_1=num_1/num_2;
   */
   printf("After swapping, value of num_1:%f\n",num_1);
   printf("After swapping, value of num_2:%f\n",num_2);

}
