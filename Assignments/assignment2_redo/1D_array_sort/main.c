#include <stdio.h>
#include "swap.h"
#include "typedef.h"
#define size 5

int main ()
{
    U32 arr[size]={0};

    for (U16 i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    printf("Before sorting: ");
    for (U16 i= 0; i< size; i++)
    {
        printf("%d ", arr[i]);
    }
     for (U16 i=0; i<size; i++)
     {
        for (U16 j=i+1; j<size; j++)
        {
               if (arr[i]>arr[j])
               {
                swap(&arr[i], &arr[j]);
               }
        }
     
     }
    printf("\nAfter sorting: ");
      for (U16 i=0; i< size; i++)
    {
        printf("%d ", arr[i]);
    }
   

    return 0;
}