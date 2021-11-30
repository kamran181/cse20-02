// Program to find length of a given string.
#include<stdio.h>

int main()
{
    char strarr[80];
    printf("Enter a String:\n");
    int i = 0;
    while ((strarr[i] = getchar()) != '\n')
        i++;
    int count = 0;
    i = 0;
    while (strarr[i] != '\n')
    {
        count++;
        i++;
    } // while
    printf("No of elements in given string is %d", count);
} // main