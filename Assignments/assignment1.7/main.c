#include <stdio.h>
#include "convert.h"

int main ()
{

    int size; 

    scanf("%d", &size);
    char arr[size];

    for (int i=0; i<size; i++)
    {
        scanf(" %c", &arr[i]);
    }

    convert (arr, size);

   
    return 0;
}