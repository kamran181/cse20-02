// Program to display memory address of an integer variable using pointers.
#include<stdio.h>

int main()
{
    int *ptr, var = 10;
    ptr = &var;
    printf("%p", ptr);
} // main