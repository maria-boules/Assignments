#include <stdio.h>
#include "typedef.h"
#define size 5

void reverse(int arr[])
{
    for (U16 i=size-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
}