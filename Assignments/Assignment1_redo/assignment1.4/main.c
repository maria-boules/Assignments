#include <stdio.h>
#include "findFreq.h"
#include "typedef.h"
#define size 5

int main()
{
    U16 num=0; 
    U16 arr[size];
    printf("Please enter 5 numbers\n");

    for (U16 i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Please enter search value\n");

    scanf("%d", &num);

    printf("%d is repeated %d times", num, findFreq(arr, num));

    return 0;

}