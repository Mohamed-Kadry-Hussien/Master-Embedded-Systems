/*
 ======================================================================================================================
 Name        : EX_4_Sum of a 2 matrix [2][2]
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 31/7/2024
 Description : Unit 2 C-Progtamming >>Array&string >> assigments >> EX_4 using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
    float matrix_1 [2][2];
    float matrix_2 [2][2];
    float sum [2][2];

    printf("Enter the matrix 1 : \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%f",&matrix_1[i][j]);
        }
    }

    printf("Enter the matrix 2 : \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%f",&matrix_2[i][j]);
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            sum[i][j]=matrix_1[i][j]+matrix_2[i][j];
        }
    }
    printf("the sum of two matrix :\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%0.3f  ",sum[i][j]);
        }
        printf("\n");
    }



   return 0;

}
