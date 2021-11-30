
#include<stdio.h>


void updateVar(int *p, int *q)
{
    int temp;
    temp = *p; *p = *q; *q = temp + *p;
} 

int main()
{
    int x = 0, y = 1;
    printf("%d  ", y);
    while (x + y <= 21)
    {
        printf("%d  ", x + y);
        updateVar(&x, &y);
    } 
} 
