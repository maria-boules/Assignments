#include <stdio.h>
#include "findcharFreq.h"
#include "typedef.h"
#define size 5

int main ()
{
    U8 freq_char=0; 

    U8 arr[size];

    printf("Please enter array characters\n");

    for (U8 i=0; i<size; i++)
    {
        scanf(" %c", &arr[i]);
    }

    printf("Please enter desired char\n");

    scanf(" %c", &freq_char);

    printf("%c is repeated %d times", freq_char, findcharFreq(arr, freq_char));

    return 0;

}

    