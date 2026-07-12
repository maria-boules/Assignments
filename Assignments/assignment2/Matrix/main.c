#include <stdio.h>
#include "matrix.h"

int main()
{
    int matrix[3][3]; int searchValue;
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
             printf("%d ", matrix[i][j]);
        } printf("\n");
    }
   
   printf("Sum of Diagonal= %d\n", sumMainDiagonal(matrix));
   printf("Enter search value\n");
   scanf("%d", &searchValue);
   int *pointer = &matrix[0][0];
   searchElement(pointer, searchValue);
}