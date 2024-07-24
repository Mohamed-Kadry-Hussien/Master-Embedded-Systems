/*
 ======================================================================================================================
 Name        : Calculate Circle Area or Circumference
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 24/7/2024
 Description : Unit 2 C-Progtamming >> C-Basic >> Lab_1 using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float radius,Circumference,Area;
	char choose,again;
	printf("Enter the radius of circle : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&radius);
	Circumference=2*3.14159*radius;
	Area=3.14159*radius*radius;
	label:
	printf("Choose\na-calculate Area\nb-calculate Circumference\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&choose);
	if(choose=='a'||choose=='A')
	{
		printf("the Area of Circle with radius(%f)equal %f\n",radius,Area);
	}
	else if(choose=='b'||choose=='B')
	{
		printf("the Circumference of Circle with radius(%f)equal %f\n",radius,Circumference);
	}
	printf("choose\ncalculate again click 'z'\nclose application click 'c'");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&again);
	if(again=='z'||again=='Z')
	{
		goto label;
	}




}
