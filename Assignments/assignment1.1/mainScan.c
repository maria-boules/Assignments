#include <stdio.h>
#include "scan.h"
int main ()
{

    int size;
    scanf("%d", &size);
    int arr[size];

    scan(arr, size);

    return 0;
}