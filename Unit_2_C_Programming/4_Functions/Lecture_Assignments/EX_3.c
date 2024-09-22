/*
 ======================================================================================================================
 Name        : EX_3_prints a sentences entered by the user in a reverse order using recursion.
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 9/8/2024
 Description : Unit 2 C-Programming >>Functions>>Ex_3 
 ======================================================================================================================
 */
#include <stdio.h>
char reverse_order(void);
int main(void)
{
    printf("Enter the sentence : ");
    reverse_order();

}
char reverse_order(void)
{
    char ch;
    ch=getchar();
    if(ch!='\n')
    {
        reverse_order();
        printf("%c",ch);
    }

}
