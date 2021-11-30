// To display characters of a string using pointers.
#include<stdio.h>

int main()
{
    // here *ptc is pointer to char and can store address of 
    // only char it store address of first element.
    char c[80], *pointerToChar;
    printf("Enter the string:\n");
    scanf("%[^\n]", c);
    pointerToChar = c;

    printf("The String is ");
    while (*pointerToChar != '\0')
        printf("%c", *pointerToChar++);
    printf("\n");
} // main