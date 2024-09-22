/*
 ======================================================================================================================
 Name        :  * -------------------------------------------------------
                * Question Number: 2
                * Required: c function to take an integer number and calculate it's square root
                * ex1: input:4 ->output:2.000
                * ex2: input:10 ->output:3.162
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 12/8/2024
 Description : Unit 2 C-Programming >>MidTerm 
 ======================================================================================================================
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

float square_root(int num);  //prototype(deceleration)

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    float root ;
    root= square_root(num);
    printf("the square root of (%d) equal %0.3f",num,root);
}

float square_root(int num)  //definition
{
    float square =sqrt(num) ;
    return square;
}
