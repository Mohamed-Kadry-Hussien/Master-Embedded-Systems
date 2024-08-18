/*
======================================================================================================================
 Name        : EX5_C_Program_to_Find_Area_of_a_circle_by_Passing_Arguments.
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 17/8/2024
 Description : Unit 2 C-Programming >>Structures >> assignments >> EX5 using ANSI C-style (c99)
 ======================================================================================================================
 */

 #include <stdio.h>
 #include <math.h>
 #define PI 3.14
struct Area
{
   float radius;
   double area;
};

struct Area getArea(void)
{
    struct Area temp_read;
    printf("Enter the radius of circle :");
    scanf("%f",&temp_read.radius);
    temp_read.area=PI*pow(temp_read.radius,2);
    return temp_read ;
}

int main()
{
    struct Area test ;
    test=getArea();
    printf("the area of radius (%0.2f) equal : %0.4lf",test.radius,test.area);
    return 0;
}
