#include <stdio.h>

void scan(int arr[], int size)
    {
        for (int ctr=0; ctr<size; ctr++)
        {
            scanf("%d", &arr[ctr]);
        }

        for (int ctr=0; ctr<size; ctr++)
        {
            printf("%d ", arr[ctr]);
        }
    }