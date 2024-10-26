/*
    Author: Mohamed Kadry Hussien
    Program: Write a C program to find a sum of n elements entered by 
    a user using the dynamic allocation approach
*/

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n = 0, i = 0, *nPtr = NULL, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    nPtr = (int*) malloc(n * sizeof(int));
    if (nPtr == NULL) {
        printf("%s\n", "Memory cannot be allocated!");
        exit(0);
    }
    else {
        for (i = 0; i < n; i++) {
            scanf("%d", nPtr + i);
            sum += *(nPtr + i);
        }
    }
    printf("Sum of elements is : %d\n", sum);
    free(nPtr);

    return 0;
}