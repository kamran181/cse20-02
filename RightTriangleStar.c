/* Print
*
* *
* * *
* * * *
* * * * *
* * * * * *
*/
#include<stdio.h>

int main()
{
    int index_ROWS, index_COLS;
    for (index_ROWS = 1; index_ROWS <= 6; index_ROWS++)
    {
        for (index_COLS = 1; index_COLS <= index_ROWS; index_COLS++)
        {
            printf("* ");
        } 
        printf("\n");
    }         
} 