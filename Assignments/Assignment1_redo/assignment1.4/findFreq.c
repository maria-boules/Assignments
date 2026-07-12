#include "typedef.h"
#define size 5

int findFreq (int arr[], int num)
{
    U16 freq=0; 

    for (int i=0; i<size; i++)
    {
        if (arr[i]==num)
        {
            freq++;
        }
    }
     
    return freq;
}