#include "typedef.h"
#define size 5
char findmaxChar (char arr[])
{
    U8 max_char=arr[0];

    for (U16 i=0; i<size; i++)
    {
         if (arr[i]>max_char)
         {
            max_char=arr[i];
         }
    } 
    return max_char;
   
}