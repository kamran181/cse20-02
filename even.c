// Printing all even numbers between 1 and 50.
#include<stdio.h>

int main()
{   
    int num = 1;
    
    while (num <= 50)
    {
        if (num % 2 == 0)
            printf(" %d\t", num);
        num++;
    } 
} 