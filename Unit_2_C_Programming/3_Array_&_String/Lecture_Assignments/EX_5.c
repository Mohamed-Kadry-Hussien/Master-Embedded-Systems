/*
 ======================================================================================================================
 Name        : EX_5_Transpose_of_matrix
 Author      : Eng. Mohamed Kadry Hussien
 Created on  : 31/7/2024
 Description : Unit 2 C-Programming >> Array & String >> Assignments >> EX_5
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
    int row, column;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);

    float matrix[row][column];
    float transpose[column][row];

    printf("Enter the matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }

    // Calculate the transpose of the matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            transpose[j][i] = matrix[i][j];  // Swap the indices for transposing
        }
    }

    // Print the original matrix
    printf("The original matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%2.2f  ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the transposed matrix
    printf("The transpose of the matrix:\n");
    for (int i = 0; i < column; i++)  // rows and columns are swapped
    {
        for (int j = 0; j < row; j++)
        {
            printf("%2.2f  ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
