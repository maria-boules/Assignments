#include <stdio.h>

void sort_2(int arr[], int size)
{
    int max=0;
    int temp=0;
   int position;
    for (int ctr=0; ctr<size; ctr++) 
    {
        max=arr[ctr]; position=ctr;
        for (int ctr_2=ctr+1; ctr_2<size; ctr_2++) 
        {
             if (arr[ctr_2]>max)
        {
           max=arr[ctr_2]; position=ctr_2;
        }
        } temp=arr[ctr]; arr[ctr]=max; arr[position]=temp; 
    }

     for (int ctr=0; ctr<size; ctr++)
    {
        printf("%d ", arr[ctr]);

    }
}
