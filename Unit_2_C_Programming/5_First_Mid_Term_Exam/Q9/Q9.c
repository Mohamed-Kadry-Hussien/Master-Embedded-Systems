/*
 ======================================================================================================================
 Name        :   * -----------------------------------------------------
                 * Question Number: 9
                 * Required: c function to reverse words in string
                 * ex: input: mohamed gamal
                 * output:gamal mohamed
 * -----------------------------------------------------
 Author      : Eng. Mohamed Kadry Hussien
 Created on	 : 12/8/2024
 Description : Unit 2 C-Programming >> MidTerm using ANSI-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Function prototype (declaration) for reverse Words string
void reverse_Words_string (char arr[],int size);

int main()
{

    char arr[30];
    int size;


	printf("Enter the string :\n");
	gets(arr);

	size=strlen(arr);
	printf("the string before reverse :");
	puts(arr);
	printf("the string after reverse  :");
	reverse_Words_string(arr,size);
}

// Function definition for reverse Words string
void reverse_Words_string (char arr[],int size)
{

    for(int i=0;i<size;i++)
    {

        if(arr[i]==' ')
        {

                for(int j=i+1;arr[j]!=0;j++)
                {
                   printf("%c",arr[j]);
                }
                printf(" ");
                for(int j=0;j<i;j++)
                {
                   printf("%c",arr[j]);
                }


        }

    }

}
