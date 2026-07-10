#include <stdio.h>

void reverse(int arr[], int size)
{
    for (int i=size-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
}