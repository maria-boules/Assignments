int findcharFreq (char arr[], int size, char freq_char)
{
    int freq=0; 

    for (int i=0; i<size; i++)
    {
        if (arr[i]==freq_char)
        {
            freq++;
        }
    }
     
    return freq;
}