// Program to display string in reverse order
#include<stdio.h>
#include<string.h>

int main()
{
    char string[80], *pointerToString;
    printf("Enter a string to reverse it\n");
    scanf("%[^\n]", string);
    int len = strlen(string) - 1;
    pointerToString = &string[len];
    printf("The reverse of the given string is ");
    while (len >= 0)
    {
        printf("%c", *pointerToString--);
        len--;
    } // while
    printf("\n");
} // main