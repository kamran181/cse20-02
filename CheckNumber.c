// To check whether a given number is odd or even
#include<stdio.h>

int main()
{
    // integer data type to store integer input from user.
    int givenNum;
    printf("Please Enter An Integer:\n");
    // Pre defined function in c to take input from user and storing it.
    scanf("%d", &givenNum);

    // Using Control Statements if else
    if (givenNum % 2 == 0)
        printf("%d is a Even Number", givenNum);
    else 
        printf("%d is a Odd Number", givenNum);
} // main