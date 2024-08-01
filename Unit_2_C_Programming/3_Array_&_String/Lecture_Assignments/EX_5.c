/*
 ======================================================================================================================
 Name        : EX_5_Transpose_of_matrix
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 31/7/2024
 Description : Unit 2 C-Progtamming >>Array&string >> assignments >> EX_5 using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <string.h>

void main()
{
    int row,column;

    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("Enter the number of columns:");
    scanf("%d",&column);

    float matrix [row][column];
    float transpose [row][column];

    printf("Enter the matrix : \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            scanf("%f",&matrix[i][j]);
        }
    }


    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            transpose[i][j]=matrix[j][i];
        }
    }


    printf("the normal matrix :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("%2.2f  ",matrix[i][j]);
        }
        printf("\n");
    }


    printf("the transpose of  matrix :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("%2.2f  ",transpose[i][j]);
        }
        puts(""); // new line added after every row

    }

}
