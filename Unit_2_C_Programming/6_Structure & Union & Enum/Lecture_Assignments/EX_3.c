/*
======================================================================================================================
 Name        : EX3 C program to add two compLex numbers by passing structure to a function.
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 17/8/2024
 Description : Unit 2 C-Programming >>Structures >> assignments >> EX3 using ANSI C-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>

struct Scomplex
{
    float r_num;
    float i_num;
};

struct Scomplex Read_complex()
{
    struct Scomplex temp_read;
    printf("Enter the real number :\n");
    scanf("%f", &temp_read.r_num);
    printf("Enter the imaginary number :\n");
    scanf("%f", &temp_read.i_num);

    return temp_read;
}

struct Scomplex Add_complex(struct Scomplex temp1, struct Scomplex temp2)
{
    struct Scomplex sum_complex;
    sum_complex.r_num = temp1.r_num + temp2.r_num;
    sum_complex.i_num = temp1.i_num + temp2.i_num;

    return sum_complex;
}

void Print_complex(struct Scomplex temp_print)
{
    printf("\nSum of two complex numbers : %0.2f+%0.2f i\n", temp_print.r_num, temp_print.i_num);
}

int main()
{
    struct Scomplex D1, D2, sum_complex;

    printf("For 1st complex number\n");
    D1 = Read_complex();
    printf("For 2st complex number\n");
    D2 = Read_complex();

    sum_complex = Add_complex(D1, D2);
    Print_complex(sum_complex);

    return 0;
}
