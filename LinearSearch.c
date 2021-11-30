// Program to search an element in an array.

#include<stdio.h>

int main()
{
    int sizeOfArray, index, keyElement;

    printf("Enter key element which is to be found:\n");
    scanf("%d", &keyElement);

    printf("Enter size of the array: ");
    scanf("%d", &sizeOfArray);
    int inputArray[sizeOfArray];
    
    for (index = 0; index < sizeOfArray; index++)
    {
        printf("Enter element no. %d: ", index + 1);
        scanf("%d", &inputArray[index]); 
    } 

    
    index = 0;
    while (index < sizeOfArray)
    {
        if (keyElement == inputArray[index])
        {
           printf("Key found at position no. %d\n", index + 1);
           break;
        }
        else 
            if (index == sizeOfArray - 1)
                printf("Key not found\n");
        index++;
    } 
    
    printf("From the given array: ");
    
    for (index = 0; index < sizeOfArray; index++)
        printf("%d ", inputArray[index]);
    printf("\n"); 
}