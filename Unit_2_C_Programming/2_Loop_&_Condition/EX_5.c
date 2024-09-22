/*
 ======================================================================================================================
 Name        : EX5_Check whether a character is an alphabet or not
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Programming >> C-Basic >> Assignment_2 >>Ex_5
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a Character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	if((ch >= 65 && ch <=90)||(ch >= 97 && ch <= 122))
		printf("%c is an alphabet\n",ch);
	else
		printf("%c is not an alphabet\n",ch);
}
