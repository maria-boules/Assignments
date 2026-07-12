#include <stdio.h>
#include "matrix.h"
#include "typedef.h"

int main()
{
    U32 matrix[3][3]; U32 searchValue;
    for (U16 i=0; i<3; i++)
    {
        for(U16 j=0; j<3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (U16 i=0; i<3; i++)
    {
        for (U16 j=0; j<3; j++)
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