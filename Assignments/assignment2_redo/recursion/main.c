#include <stdio.h>
#include "recursion.h"
#include "typedef.h"

int main ()
{
    U32 base=0; U32 exp=0;
    U32 num=0;
    printf("Enter base: ");
    scanf("%d", &base); 
    printf("Enter exponent: ");
      scanf("%d", &exp); 
    printf("result: %d\n", power (base, exp));
    printf("Enter number: ");
     scanf("%d", &num); 
    printf("result: %d", sumDigits(num));



    return 0;
}