/*
    Author: Mohamed Kadry Hussien
    Program: Write a C example of using realloc() function
*/

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int i = 0, *Ptr = NULL, n1 = 0, n2 = 0;
    printf("%s\n", "Enter a size to be allocated");
    scanf("%d", &n1);
    Ptr = (int*) malloc(n1 * sizeof(int));
    printf("%s\n", "Addresses of memory allocated by malloc");
    for (i = 0; i < n1; i++) {
        printf("%u\n", Ptr + i);
    }
    printf("%s\n", "\n");
    printf("%s\n", "Enter a new size to be allocated");
    scanf("%d", &n2);

    Ptr = realloc(Ptr, n2 * sizeof(int));
    printf("%s\n", "Addresses of memory allocated by malloc");
    for (i = 0; i < n2; i++) {
        printf("%u\n", Ptr + i);
    }
    printf("%s\n", "\n");
    free(Ptr);
    return 0;
}