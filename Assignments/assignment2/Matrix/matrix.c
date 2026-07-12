 #include <stdio.h>
 int sumMainDiagonal(int matrix[3][3])
 {
    int sum=0;

     for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        if(i==j){
           sum+=*(*(matrix+i)+j);
        }
      
    } return sum;
 }
 void searchElement(int *ptr, int target){
    int freq=0;
    for (int i=0; i<9; i++){
         if (*(ptr+i)==target)
            {
                freq++;
            }
        } 
     printf("%d is repeated %d times", target, freq);

  
 }