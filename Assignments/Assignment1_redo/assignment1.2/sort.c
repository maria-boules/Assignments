#include <stdio.h>

void sort (int arr[], int size){

   
    for (int ctr=0; ctr<size; ctr++)
    {
        for (int ctr_2=ctr+1; ctr_2<size; ctr_2++)
        {
             if (arr[ctr_2]<arr[ctr])
        {
            int z=arr[ctr];
            arr[ctr]=arr[ctr_2];
            arr[ctr_2]=z;
        }
        }
       
        
    }

     for (int ctr=0; ctr<size; ctr++)
    {
        printf("%d ", arr[ctr]);
    
    } printf("\n");
}