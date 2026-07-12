#include <stdio.h>
#include "recursion.h"

int main ()
{
    int base=0; int exp=0;
    int num=0;
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