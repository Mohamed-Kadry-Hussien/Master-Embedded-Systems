/*
 ======================================================================================================================
 Name        : * --------------------------------------------------------------------
               * Question Number: 6
               * Required: c function to return unique number in array with one loop
               * ex1: input: int a[7]={4,2,5,2,5,7,4}; ->output:7
               * ex2: input: int a[3]={4,2,4}; ->output:2
               * -------------------------------------------------------------------
 Author      : Eng. Mohamed Kadry Hussien
 Created on	 : 12/8/2024
 Description : Unit 2 C-Programming >> MidTerm using ANSI-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototype (declaration) for unique number
int unique_number(int arr[],int size);



int main()
{

    int arr_1[7]={4,2,5,2,5,7,4};  // test case 1
    int size_arr_1 = sizeof(arr_1)/sizeof(arr_1[0]);
    printf("the unique number of array 1 is %d\n",unique_number(arr_1,size_arr_1));


    int arr_2[3]={4,2,4};    //test case 2
    int size_arr_2 = sizeof(arr_2)/sizeof(arr_2[0]);
    printf("the unique number of array 2 is %d",unique_number(arr_2,size_arr_2));
    return 0;

}

// Function definition for unique number
int unique_number(int arr[],int size)
{

    int res;
    for(int i=0;i<size;i++)
    {

        int count=0;
        for(int j=0;j<size;j++) // Compare arr[i] with every other element in the array
        {
            if(arr[i]==arr[j])  // Increment the count if find the same number in other position
                count++;

        }
        if(count==1)    //  // Check if the current element is unique (appears once)
        {
            res=arr[i];
            return res ;
        }
    }

}
