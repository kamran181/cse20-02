   // Program to find Transpose of a given matrix
#include<stdio.h>

void transpose(int c, int r, int m[r][c])
{
    int transposeMatrix[r][c], i, j, x, y;

    for (i = 0, x = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            transposeMatrix[i][j] = m[j][i]; 
    }


    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", transposeMatrix[i][j]);
        printf("\n");
    }
} 
int main()
{
    int rows, cols, i, j;
    printf("Enter the order of matrix OR rows and columns resp.: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf("\nEnter A%d%d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]); 
        } 
    
    printf("\nThe representation of given matrix is:\n");
    
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    
    printf("\nTranspose of the given Matrix is:\n");
    transpose(rows, cols, matrix);
} 