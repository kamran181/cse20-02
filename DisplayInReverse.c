// Program for displaying the given array in reverse.
#include<stdio.h>

int main()
{
    int sizeOfArray, index;

    printf("Enter size of the array: ");
    scanf("%d", &sizeOfArray);
    
    int userArray[sizeOfArray];
    
    
    for (index = 0; index < sizeOfArray; index++)
    {
        printf("Enter element no. %d: ", index + 1);
        scanf("%d", &userArray[index]); 
    } 
    
    printf("The given array is: ");
    
    for (index = 0; index < sizeOfArray; index++)
        printf("%d ", userArray[index]);
    printf("\n");

    printf("The Reverse of the given array is:\n");
    
    for (index = sizeOfArray - 1; index >= 0; index--)
        printf("%d ", userArray[index]);
    printf("\n");
} 