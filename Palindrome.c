// Program to check whether the given string is a palindrome or not.
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20], str2[20];
    printf("Please enter a string to check palindrome\n");
    scanf("%[^\n]", str1);
    int len = strlen(str1);
    for (int i = 0; i < strlen(str1); i++)
    {
        // cause the len element would be \0.
        str2[i] = str1[len - 1];
        len--;
    } // for
    str2[strlen(str1)] = '\0';
    if (!strcmp(str1, str2))
        printf("%s is a Palindrome\n", str1);
    else
        printf("%s is not a Palindrome\n", str1);
} // main