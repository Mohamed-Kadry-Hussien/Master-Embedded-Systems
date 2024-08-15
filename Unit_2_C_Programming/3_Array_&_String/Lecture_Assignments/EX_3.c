/*
 ======================================================================================================================
 Name        : EX_3_Find_theFrequency_of_Characters
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 31/7/2024
 Description : Unit 2 C-Progtamming >>Array&string >> assigments>>EX_3 using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <string.h>
#define j 100
int main()
{
   char str [j];
   char ch ;
   int n=0;

   printf("Enter a String : ");
   gets(str);

   printf("Enter the character to count frequency : ");
   scanf("%c",&ch);

   for(int i=0;i<strlen(str);i++)
   {
       if(str[i]==ch)
       {
           n++;
       }

   }
   if(n==0)
   {
       printf("the letter is not present in string ");
   }
   else if(n>0)
   {
       printf("Frequency of %c : %d\n", ch, n);
   }








}
