#include <stdio.h>
#include "convert.h"
#define size 5

int main ()
{
    char arr[size];

    for (int i=0; i<size; i++)
    {
        scanf(" %c", &arr[i]);
    }

    convert (arr);

   
    return 0;
}