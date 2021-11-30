// Finding factorial using recursion.
#include<stdio.h>

int factorial(int num)
{
    if (num == 0)
        return 1;
    return num * factorial(num -1);
} // factorial 

int main()
{
    int givenNum;
    printf("Enter the number: ");
    scanf("%d", &givenNum);
    printf("%d! = %d\n", givenNum, factorial(givenNum));
} // main