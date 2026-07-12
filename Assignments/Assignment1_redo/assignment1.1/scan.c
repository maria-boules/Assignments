#include <stdio.h>
#include "typedef.h"
#define size 5

void scan(int arr[])
    {
        for (U16 ctr=0; ctr<size; ctr++)
        {
            scanf("%d", &arr[ctr]);
        }

        for (int ctr=0; ctr<size; ctr++)
        {
            printf("%d ", arr[ctr]);
        }
    }