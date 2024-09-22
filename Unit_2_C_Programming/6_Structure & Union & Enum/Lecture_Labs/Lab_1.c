/*
 ======================================================================================================================
 Name        : Lab_1 Write A program Adding Two Complex Numbers using Structure And Function
 Author      : Eng. Mohamed Kadry Hussien
 Created on	 : 15/8/2024
 Description : Unit 2 C-Programming >>Structure>>LABS 
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Scomplex
{
    double real_part ;
    double imaginary_part ;

};

struct Scomplex ReadComplex (char name[])
{
    struct Scomplex temp ;
    printf("Enter %s complex value :\n",name);
    printf("the real part : ");
    scanf("%lf",&temp.real_part);
    printf("Enter the imaginary part : ");
    scanf("%lf",&temp.imaginary_part);
    return temp;
}

struct Scomplex AddComplex (struct Scomplex A ,struct Scomplex B)
{
    struct Scomplex temp;
    temp.real_part=A.real_part+B.imaginary_part;
    temp.imaginary_part=A.imaginary_part+B.imaginary_part;
    return temp ;
}

void PrintComplex(char name[],struct Scomplex A)
{

    printf("%s = (%0.2lf) +j (%0.2lf) \r\n ",name,A.real_part,A.imaginary_part);

}

int main (void)
{
    struct Scomplex A,B,C ;
    A =ReadComplex("A");
    B =ReadComplex("B");
    C =AddComplex(A,B);
    PrintComplex("C",C);
}
