/*
 ======================================================================================================================
 Name        : lab3_Finding a Name in a Set of Names
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 7/8/2024
 Description : Unit 2 C-Programming >>Function >> lab3 
 ======================================================================================================================
 */
#include <stdio.h>

int findName(char names[][14], int n, char name[])
{
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (names[i][j] == name[j])
        {
            if (name[j] == '\0')
            {
                return 1; // Name found
            }
            j++;
        }
    }
    return 0; // Name not found
}

void main()
{
    char name[14];
    char names[5][14] = {"Alaa", "Osama", "Mamdouh", "Samy", "Hossain"};
    puts("Enter your first name:");
    gets(name); // Note: gets is unsafe and deprecated, consider using fgets in real applications
    if (findName(names, 5, name) == 1)
    {
        puts("Welcome");
    }
    else
    {
        puts("Goodbye");
    }
}
