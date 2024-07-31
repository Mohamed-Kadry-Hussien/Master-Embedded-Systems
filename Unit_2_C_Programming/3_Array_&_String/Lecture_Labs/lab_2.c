/*
 ======================================================================================================================
 Name        : lab_2_Calculate_Polynomial_Value_for_a_Set_of_Inputs
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 31/7/2024
 Description : Unit 2 C-Progtamming >>Array&string >> lab2 using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x[5]={5,16,22,3.5,15};
    float y;
    int i;
    for(i=0;i<=4;i++)
    {
        y=5*x[i]*x[i]+3*x[i]+2;
        printf("y(%f)= %f\r\n",x[i],y);
    }

    return 0;
}
