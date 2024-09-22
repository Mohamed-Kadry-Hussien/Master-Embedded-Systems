/*
 ======================================================================================================================
 Name        : lab_1_scan_and_print_students_degrees
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 31/7/2024
 Description : Unit 2 C-Programming >>Array&string >> lab1
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float degrees[10];

    for(int i=0;i<=9;i++)
    {
        printf("Enter the student %d degree :",i+1);
        scanf("%f",&degrees[i]);
    }

    for(int i=0;i<=9;i++)
    {
        printf("the student %d degree is :%f\n",i+1,degrees[i]);
    }
    return 0;
}
