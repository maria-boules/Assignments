#include <stdio.h>
#include "swap.h"
#define size 5

int main ()
{
    int arr[size]={0};

    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    printf("Before sorting: ");
    for (int i=0; i< size; i++)
    {
        printf("%d ", arr[i]);
    }
     for (int i=0; i<size; i++)
     {
        for (int j=i+1; j<size; j++)
        {
               if (arr[i]>arr[j])
               {
                swap(&arr[i], &arr[j]);
               }
        }
     
     }
    printf("\nAfter sorting: ");
      for (int i=0; i< size; i++)
    {
        printf("%d ", arr[i]);
    }
   

    return 0;
}