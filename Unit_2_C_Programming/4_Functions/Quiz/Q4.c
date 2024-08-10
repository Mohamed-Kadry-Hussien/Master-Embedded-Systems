/*
 ======================================================================================================================
 Name        : Q4_Convert a decimal number stored as an ASCII array to an unsigned integer
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 9/8/2024
 Description : Unit 2 C-Programming >>Functions>>Quiz >> Q4 using ANSI-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>

unsigned int ascii_to_unsigned_int(char ascii_array[], int size);

int main()
{
    char ascii_number[] = "872004";
    unsigned int result = ascii_to_unsigned_int(ascii_number, sizeof(ascii_number)-1);// -1 because the sizeof calculate \0 in end of string
    printf("The unsigned integer is: %u\n", result);

    return 0;
}

unsigned int ascii_to_unsigned_int(char ascii_array[], int size)
{

    unsigned int result = 0;
    int number;
    int i = 0;
    int power = 1; //power of first number from the right

    for (int j = size - 1; j >= 0; j--)
    {
        number = (ascii_array[j] - 48) * power; // '0' == 48 in ASCII code
        result += number;  //add each number to total number
        power *= 10; // power of each number (increase)
    }

    return result;
}
