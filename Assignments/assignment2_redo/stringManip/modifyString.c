#include <stdio.h>
#include "typedef.h"
void modifyString(char *str)
{
    int count=0; int i=0;
    while (*str!='\0'){

        switch (*str)
       {

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
         count++; break;
       }

        if(*str>=97&&*str<=122)
        {
            *str-=32;
        }

       
       

         str++; i++;

    } str-=i; printf("%s\nNumber of vowels: %d", str, count);
}