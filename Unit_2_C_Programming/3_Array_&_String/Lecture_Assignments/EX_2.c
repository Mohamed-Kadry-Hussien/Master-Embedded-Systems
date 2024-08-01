/*
 ======================================================================================================================
 Name        : EX_2_Find_The_Length_of_a_String
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 31/7/2024
 Description : Unit 2 C-Progtamming >>Array&string >> assigments>>EX_2 using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#define n 100

void main()
{
   char str [n];
   int z=0;

   printf("Enter a String :");
   scanf("%s",str);      // OR gets(str); TO calculate letters after space

   for (int i=0;i<n;i++)
   {
       if(str[i]!=0)
       {
           z++;
       }
       else
       {
        break;          //To exit out loop
       }
   }
   //OR
   /*
   for (int i=0;i<n && str[i]!=0;i++)
   {
       z++;
   }
   */

   printf("Length of string is %d\n",z);


}
