#include <stdio.h>
#include "sort.h"
#include "typedef.h"
#define size 5

int main ()
{
    U32 arr[size];

    for (U32 ctr=0; ctr<size; ctr++)
    {
        scanf("%d", &arr[ctr]);
    }

    sort (arr);
    sort_2 (arr);

    
    return 0;
}