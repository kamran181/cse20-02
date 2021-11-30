// Swaping contents of two integer variables using pointers.
#include<stdio.h>

int main()
{
    void swap(int *p, int *q);

    // varaibles for swapping
    int x, y;
    printf("Enter the values of x:\n");
    scanf("%d", &x);   
    printf("Enter the values of y:\n");
    scanf("%d", &y);   

    swap(&x, &y);

    printf("Value of x is %d and y is %d", x, y);
} // main

// Swapping the integer using pointers.
void swap(int *pointerOfX, int *pointerOfY)
{
    int temp = *pointerOfX; *pointerOfX = *pointerOfY;
    *pointerOfY = temp;
} // swap