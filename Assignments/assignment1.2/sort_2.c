#include <stdio.h>

void sort_2(int arr[], int size)
{
    int max=0;
    int temp=0;
   int position;
    for (int ctr=0; ctr<size; ctr++) //outer loop passes by each element
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
