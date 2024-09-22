/*
======================================================================================================================
 Name        : Lab_2
 Author      : Eng.Mohamed Kadry Hussien
 Created on	 : 21/8/2024
 Description : Unit 2 C-Programming >>Pre-Processor Directives>>Lab_2  
 ======================================================================================================================
 */
#include <stdio.h>
#define debug
#define Dprintf(debug_level,...)   if (debug_level>1)\
                                      printf("File Name : %s ,Function Name : %s ,Line Number : %d ",__FILE__,__func__,__LINE__); \
                                      printf(">>\t");\
                                      printf(__VA_ARGS__);
int add(int a, int b)
{
#ifdef debug
    Dprintf(2,"start function\n")
#endif
int sum = 0;
    sum = a+b;
    printf("sum is %d\n",sum);
#ifdef debug
    Dprintf(2,"exit function \n");
#endif

}
int sub(int a, int b)
{
#ifdef debug
    Dprintf(2,"start function \n");
#endif
int sum = 0;
    sum=a-b;
    printf("sum is %d\n",sum);
#ifdef debug
    Dprintf(2,"exit function \n");
#endif
}
int mul(int a, int b)
{
#ifdef debug
    Dprintf(2,"start function \n")
#endif
    int sum = 0;
    sum=a*b;
    printf("sum is %d\n",sum);
    #ifdef debug
    Dprintf(2,"exit function \n");
    #endif
}
int div(int a, int b )
{
#ifdef debug
    Dprintf(2,"start function\n")
#endif
    int sum = 0;
    sum=a/b;
    printf("sum is %d\n",sum);
    #ifdef debug
    Dprintf(2,"exit function \n");
    #endif
}
int main()
{
#ifdef debug
    Dprintf(2,"start function\n")
#endif
    add(12,12);
    sub(24,12);
    mul(25,12);
    div(25,5);
#ifdef debug
    Dprintf(2,"exit function \n");
#endif
    return 0;

}
