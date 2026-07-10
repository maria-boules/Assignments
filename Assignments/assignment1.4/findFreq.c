int findFreq (int arr[], int size, int num)
{
    int freq=0; 

    for (int i=0; i<size; i++)
    {
        if (arr[i]==num)
        {
            freq++;
        }
    }
     
    return freq;
}