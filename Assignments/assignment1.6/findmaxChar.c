char findmaxChar (char arr[], int size)
{
    char max_char=arr[0];

    for (int i=0; i<size; i++)
    {
         if (arr[i]>max_char)
         {
            max_char=arr[i];
         }
    } 
    return max_char;
   
}