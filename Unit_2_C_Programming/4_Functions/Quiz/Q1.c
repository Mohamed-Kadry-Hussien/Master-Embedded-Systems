/*
 ======================================================================================================================
 Name        : Q1_take string from the user and compare it with the user-name which inputed
               by the user to give him a check that the use is correct.
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 9/8/2024
 Description : Unit 2 C-Programming >>Functions>>Quiz using ANSI-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
int main(void)
{
    char str1[100],str2[100];
    printf("Enter the string:");
    gets(str1);
    printf("Enter the username:");
    gets(str2);
    int test =strcmp(str1,str2);
    if(test==0)
        printf("Identical");
    else
        printf("different");
}
