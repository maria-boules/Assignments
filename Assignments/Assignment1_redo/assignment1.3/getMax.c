#include <stdio.h>
#define size 5

void getMax(int arr[])
{
    int max=arr[0];

    for (int i=0; i<size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Maximum number = %d\n", max);

    
}

void getMax2(int arr[])
{
    int max=arr[0];
    for (int i=0; i<size; i++)
    { 
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]>arr[i])
            {
                int temp=0;
                temp=arr[j]; arr[j]=arr[i]; 
                arr[i]=temp;
            }
        }

         max=arr[0];
    } printf("Maximum number = %d\n", max);
}