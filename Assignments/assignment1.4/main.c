#include <stdio.h>
#include "findFreq.h"

int main()
{
    int num=0; int size=0; 

    printf("Please enter arr size\n");

    scanf("%d", &size);

    int arr[size];

    printf("Please enter array numbers\n");

    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("Please enter search value\n");

    scanf("%d", &num);

    printf("%d is repeated %d times", num, findFreq(arr, size, num));

    return 0;

}