#include "typedef.h"
#define size 5
int findcharFreq (char arr[], char freq_char)
{
    U16 freq=0; 

    for (int i=0; i<size; i++)
    {
        if (arr[i]==freq_char)
        {
            freq++;
        }
    }
     
    return freq;
}