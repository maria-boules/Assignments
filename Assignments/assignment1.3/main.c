#include <stdio.h>

void getMax(int arr[], int size);
void getMax2(int arr[], int size);

int main ()
{

    int size;

    scanf("%d", &size);

    int arr [size];

    for(int ctr=0; ctr<size; ctr++){

        scanf("%d", &arr[ctr]);

    }

    getMax(arr, size);
    getMax2(arr, size);

    return 0;
}

void getMax(int arr[], int size)
{
    int max=arr[0];

    for (int i=0; i<size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Maximum number = %d\n", max);

    
}

void getMax2(int arr[], int size)
{
    int max=arr[0];
    for (int i=0; i<size; i++)
    { 
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]>arr[i])
            {
                int temp=0;
                temp=arr[j]; arr[j]=arr[i]; 
                arr[i]=temp;
            }
        }

         max=arr[0];
    } printf("Maximum number = %d\n", max);
}