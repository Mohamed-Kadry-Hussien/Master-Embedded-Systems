/*
 ======================================================================================================================
 Name        : Q2_
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 9/8/2024
 Description : Unit 2 C-Programming >>Functions>>Quiz >> Q2 using ANSI-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
int main(void)
{
    int arr1[8];
    int arr2[8];
    int temp[8];
    printf("Enter the first array :");
    for(int i=0; i<8; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the second array :");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("the first array before swapping:\n");
    for(int i=0; i<8; i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\n");
    printf("the second array before swapping:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\t",arr2[i]);
    }
    printf("\n");
    for(int i=0;i<8;i++) //swapping
    {
        temp[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp[i];
    }
    printf("the first array after swapping:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\n");
    printf("the second array after swapping:\n");
    for(int i=0; i<8; i++)
    {
        printf("%d\t",arr2[i]);
    }
    printf("\n");


}
