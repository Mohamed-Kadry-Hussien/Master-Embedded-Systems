/*
 ======================================================================================================================
 Name        :  * -------------------------------------------------------
                * Question Number: 3
                * Required: C function to take two integer numbers and find all prime numbers between them
                * ex: input: 1, 20 -> output:1 2 5 7 11 13 17 19
 Author      : Eng. Mohamed Kadry Hussien
 Created on	 : 12/8/2024
 Description : Unit 2 C-Programming >> MidTerm 
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Function prototype (declaration) for prime_Numbers
void prime_Numbers(int num_1, int num_2);

int main()
{
    int num_1, num_2;
    printf("Enter the first number : ");
    scanf("%d", &num_1);
    printf("Enter the second number : ");
    scanf("%d", &num_2);
    printf("The prime numbers between (%d) and (%d) : \n", num_1, num_2);
    prime_Numbers(num_1, num_2);

    return 0;
}

// Function definition for prime_Numbers
void prime_Numbers(int num_1, int num_2)
{
    int test = 0;

    // Loop through each number from num_1 to num_2
    for(int i = num_1; i <= num_2; i++)
    {
        // Reset test counter for each number
        test = 0;
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)  // If j is a divisor of i
            {
                test++;
            }
        }
        // A prime number has exactly 2 divisors: 1 and itself
        if(test == 2 || test == 1)
        {
            printf("%d\t", i);  // Print the prime number
        }
    }
}
