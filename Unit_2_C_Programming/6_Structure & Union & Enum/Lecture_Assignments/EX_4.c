/*
 ======================================================================================================================
 Name        : EX4_C_Program_to_Store_Information_of_Students_Using_Structure
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 17/8/2024
 Description : Unit 2 C-Progtamming >> Structures >> assignments >> EX4  using Ansi-style (c99)
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
    printf("\nthe name of student : %s",temp_print.name);
    printf("\nthe roll number of student : %d",temp_print.roll);
    printf("\nthe marks of student : %f\n",temp_print.marks);

}
int main()
{
    struct student person[10];
    int i ;
    for(i=0;i<10;i++)
    {
            printf("Enter the information of student(%d) :\n",i+1);
            person[i]=Read_student_info();
            puts("");
    }
    int j ;
    for(j=0;j<10;j++)
    {
         printf("Displaying information of student(%d) :\n",j+1);
         Print_student_info(person[j]);
         puts("");
    }
}
