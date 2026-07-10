#include <stdio.h>
#include "sort.h"

int main ()
{
    int size;
    scanf("%d", &size);

    int arr[size];

    for (int ctr=0; ctr<size; ctr++)
    {
        scanf("%d", &arr[ctr]);
    }

    sort (arr, size);
    sort_2 (arr, size);

    
    return 0;
}