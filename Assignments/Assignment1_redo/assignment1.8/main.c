#include <stdio.h>
#include "reverse.h"
#include "typedef.h"
#define size 5

int main ()
{

    U16 arr[size];
    for (U16 i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr);
    
    return 0;
}