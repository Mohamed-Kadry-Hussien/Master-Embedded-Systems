/*
 ======================================================================================================================
 Name        : EX1-C Program to Store Information of a Student Using Structure
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 17/8/2024
 Description : Unit 2 C-Progtamming >>Structures >> assignments >> EX1  using Ansi-style (c99)
 ======================================================================================================================
 */

 #include <stdio.h>

struct student
{
   char name[50] ;
   int roll;
   float marks;
};

struct student Read_student_info()
{
    struct student temp_read;
    printf("Enter the information of student :\n");
    printf("Enter the name of student : ");
    scanf("%s",&temp_read.name);
    printf("Enter the roll Number of student : ");
    scanf("%d",&temp_read.roll);
    printf("Enter the marks of student : ");
    scanf("%f",&temp_read.marks);
    return temp_read ;
}

void Print_student_info(struct student temp_print)
{
    printf("Displaying information :\n");
    printf("\nthe name of student : %s",temp_print.name);
    printf("\nthe roll number of student : %d",temp_print.roll);
    printf("\nthe marks of student : %f",temp_print.marks);

}
int main()
{
    struct student s;
    s=Read_student_info();
    Print_student_info(s);
}
