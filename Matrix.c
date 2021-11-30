// Program to taking matrix of mxn and print it.
#include<stdio.h>

int main()
{
    int rows, cols, i, j;
    printf("Enter the order of matrix OR rows and columns resp.: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // taking input from user. 
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf("\nEnter A%d%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]); 
        } // for
    
    printf("\nThe representation of matrix is:\n");
    // printing the matrix.
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }// for
} // main