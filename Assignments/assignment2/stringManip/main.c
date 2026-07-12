#include <stdio.h>
#include "modifyString.h"
#include "typedef.h"

int main ()
{
    char str[100]={0};
    scanf("%99s",str);
    modifyString(str);
    return 0;
}