/*
======================================================================================================================
 Name        : EX_5
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 27/8/2024
 Description : Unit 2 C-Programming >>Pointer>>Assignments>>EX_5
 ======================================================================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
  #include <stdio.h>

struct employee {
    char *empname;
    int empid;
};


    printf("\n\n Pointer : Show a pointer to an array which contents are pointer to structure :\n");
    printf("-------------------------------------------------------------------------------\n");

    static struct employee emp1 = {"Jhon", 1001}, emp2 = {"Alex", 1002}, emp3 = {"Taylor", 1003};

    struct employee *arr[] = {&emp1, &emp2, &emp3};

    struct employee *(*pt)[3] = &arr;

    /*
        Breakdown of the statement:
        - 'struct employee *' : A pointer to struct employee.
        - '(*pt)[3]' : pt is a pointer to an array of 3 pointers to struct employee.
        - '&arr' : The address of the array 'arr' is assigned to 'pt'.
    */

    printf(" Employee Name : %s \n", (**(*pt + 1)));
    printf(" Employee ID   : %d \n", (*(*pt + 1))-> empid);
    /*
        How the access works:
        - (*pt): Dereference pt to get the array 'arr'.
        - (*pt + 1): Move to the second element in the array 'arr', which is &emp2.
        - *(*pt + 1): Dereference this to get the actual struct employee (emp2).
        - (**(*pt + 1)) or (*(*pt + 1))->empname : Access the empname member of emp2.
        - (*(*pt + 1))->empid: Access the empid member of emp2.
    */

  return 0;
}
