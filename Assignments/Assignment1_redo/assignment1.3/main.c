#include <stdio.h>
#include "getMax.h"
#define size 5


int main ()
{
    int arr [size];

    for(int ctr=0; ctr<size; ctr++){

        scanf("%d", &arr[ctr]);

    }

    getMax(arr);
    getMax2(arr);

    return 0;
}

