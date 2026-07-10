#include <stdio.h>
#include "findcharFreq.h"

int main ()
{
    char freq_char=0; int size=0; 

    printf("Please enter arr size\n");

    scanf("%d", &size);

    char arr[size];

    printf("Please enter array characters\n");

    for (int i=0; i<size; i++)
    {
        scanf(" %c", &arr[i]);
    }

    printf("Please enter desired char\n");

    scanf(" %c", &freq_char);

    printf("%c is repeated %d times", freq_char, findcharFreq(arr, size, freq_char));

    return 0;

}

    