/*
 ======================================================================================================================
 Name        : EX2_C Program to check Vowel or Consonant
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Programming >> C-Basic >> Assignment_2 >>Ex_2
 ======================================================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter the alphabet : ");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
			|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
			    printf("%c is a vowel",ch);
        }
    else
    {
                printf("%c is a Consonant",ch);
    }
}
