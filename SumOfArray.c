// Passing array to a function, returning sum of all array elements. 
#include<stdio.h>

int totalSum(int a[], int len)
{
    int i, sumOfArray;
    for (i = 0; i < len; i++)
    {
        sumOfArray += a[i];
    } // for
    return sumOfArray;
} // totalSum.

int main()
{
    int sizeOfArray, index;

    printf("Enter size of the array: ");
    scanf("%d", &sizeOfArray);
    // Creating array usign the given size.
    int userArray[sizeOfArray];
    
    // Taking each element from the user.
    for (index = 0; index < sizeOfArray; index++)
    {
        printf("Enter element no. %d: ", index + 1);
        scanf("%d", &userArray[index]); 
    } // for

    // Printing the array.
    for (index = 0; index < sizeOfArray; index++)
        printf("%d ", userArray[index]);
    printf("\n");

    printf("Sum of the elements of array is: %d", totalSum(userArray, sizeOfArray));
    printf("\n");
} // main