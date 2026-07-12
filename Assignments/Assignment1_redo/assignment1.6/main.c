#include <stdio.h>
#include "findmaxChar.h"
#include "typedef.h"
#define size 5
int main()
{
    U8 arr [size];
    printf("Please enter 5 characters\n");

    for (U16 i=0; i<size; i++)
    {
        scanf(" %c", &arr[i]);
    }

    printf("Maximum character is %c", findmaxChar(arr));





    return 0;
}