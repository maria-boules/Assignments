#include <stdio.h>
#include "typedef.h"
#define size 5

void sort_2(int arr[])
{
    U16 max=0;
    U16 temp=0;
   U16 position;
    for (U16 ctr=0; ctr<size; ctr++) //outer loop passes by each element
    {
        max=arr[ctr]; position=ctr; //each new element is our new max

        for (int ctr_2=ctr+1; ctr_2<size; ctr_2++) //inner loop compares each element (from outer loop) with the *rest* of the array
        {
             if (arr[ctr_2]>max)
        {
           max=arr[ctr_2]; position=ctr_2; //we find the maximum in the array, and save its location
        }
        } temp=arr[ctr]; arr[ctr]=max; arr[position]=temp; //we replace the max with the other element 
    }

     for (int ctr=0; ctr<size; ctr++)
    {
        printf("%d ", arr[ctr]);

    }
}
