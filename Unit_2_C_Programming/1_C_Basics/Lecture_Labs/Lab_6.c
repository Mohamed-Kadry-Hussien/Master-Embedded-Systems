/*
 ======================================================================================================================
 Name        : draw pattern
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Progtamming >> C-Basic >> Lab_6 using Ansi-style (c99)
 ======================================================================================================================
 */
/*
 0 1 2 3 4 5 6 7 8 9
 1 2 3 4 5 6 7 8 9
 2 3 4 5 6 7 8
 3 4 5 6 7 8 9
 4 5 6 7 8 9
 5 6 7 8 9
 6 7 8 9
 7 8 9
 8 9
 9
 */
#include <stdio.h>


int main(void)
{
    for(int i=0;i<=9;i++)
    {
    	for(int j=i;j<=9;j++)
    	{
    		printf("%d ",j);
    	}
    	printf("\n");
    }

}
