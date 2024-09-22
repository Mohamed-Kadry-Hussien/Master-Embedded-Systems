/*
======================================================================================================================
 Name        : EX2 C program to add two distances (in inch-feet) system using structure
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 17/8/2024
 Description : Unit 2 C-Programming >>Structures >> assignments >> EX2  
 ======================================================================================================================
 */

#include <stdio.h>

struct Sdistance
{
    int feet;
    float inch;
};

struct Sdistance Read_distance()
{
    struct Sdistance temp_read;
    printf("Enter the distance in feet:\n");
    scanf("%d", &temp_read.feet);
    printf("Enter the distance in inches:\n");
    scanf("%f", &temp_read.inch);

    return temp_read;
}

struct Sdistance Add_distance(struct Sdistance temp1, struct Sdistance temp2)
{
    struct Sdistance sum_distance;
    sum_distance.feet = temp1.feet + temp2.feet;
    sum_distance.inch = temp1.inch + temp2.inch;


    if (sum_distance.inch >= 12.0)
    {
        sum_distance.inch -= 12.0;
        sum_distance.feet++;
    }


    return sum_distance;
}

void Print_distance(struct Sdistance temp_print)
{
    printf("\nSum of distance: %d' - %.2f\"\n", temp_print.feet, temp_print.inch);
}

int main()
{
    struct Sdistance D1, D2, sum_distance;

    printf("Enter the information for the 1st distance:\n");
    D1 = Read_distance();

    printf("\nEnter the information for the 2nd distance:\n");
    D2 = Read_distance();

    sum_distance = Add_distance(D1, D2);
    Print_distance(sum_distance);

    return 0;
}
