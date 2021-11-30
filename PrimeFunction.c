// Check whether a number is prime or not
#include<stdio.h>

// to check whether number is prime or not.
int checkPrime(int num)
{
    int flag;
    if (num == 1)
        return 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {    
            flag = 1;
            break;
        }
        else 
            flag = 0;
    } // for
    return flag;
} // checkPrime

int main()
{
    int givenNum;
    printf("Please Enter An Integer:\n");
    scanf("%d", &givenNum);

    if (!checkPrime(givenNum))
        printf("%d is a Prime Number.\n", givenNum);
    else 
        printf("%d is not a Prime Number.\n", givenNum);
} // main