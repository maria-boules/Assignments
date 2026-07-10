#include <stdio.h>
#include "findmaxChar.h"
int main()
{
    int size=0; 
    printf("Please enter array size\n");
    
        scanf("%d", &size);
    
    char arr [size];
    printf("Please enter array characters\n");

    for (int i=0; i<size; i++)
    {
        scanf(" %c", &arr[i]);
    }


    printf("Maximum character is %c", findmaxChar(arr, size));





    return 0;
}