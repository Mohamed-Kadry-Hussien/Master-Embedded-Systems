/*
 ======================================================================================================================
 Name        : lab_3_Calculate and Print the Transpose of 3x3 Matrix
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 31/7/2024
 Description : Unit 2 C-Progtamming >>Array&string >> lab3 using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[3][3];
    float t[3][3];

    printf("Enter the element of matrix:\n");
    for(int i=0;i<3;i++)     //scan the element of matrix
    {
        for(int j=0;j<3;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }

    printf("the matrix(3*3) before transpose:\n");
    for(int i=0;i<3;i++)    //print the element of matrix
    {
        for(int j=0;j<3;j++)
        {
            printf("%.2f   ",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++) //transpose the matrix
    {
        for(int j=0;j<3;j++)
        {
            t[i][j]=a[j][i];
        }
    }

    printf("the matrix(3*3) after transpose:\n");
    for(int i=0;i<3;i++)   //print the element of matrix after transpose
    {
        for(int j=0;j<3;j++)
        {
            printf("%.2f   ",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
