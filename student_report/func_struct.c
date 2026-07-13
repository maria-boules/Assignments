#include <stdio.h>
#include<stdint.h>
#include "function.h"

#define size 5

int main(){

    student S[size];


    for (uint8_t i=0; i<size; i++)
    {
      
        printf("Please enter S%hhd name ", i+1);
        scan_name(&S[i]);
        printf("Please enter S%hhd age ", i+1);
        scan_age(&S[i]);
        printf("Please enter S%hhd Level ", i+1);
        scan(&S[i]);
        printf("Please enter student grades\n");
        for(int j=0; j<3; j++)
        {
            printf("Sub%d: ", j+1);
            scanf("%d", &S[i].sub[j]);
        
        }

        printf("Total degree: %d\n", TotalDegree(&S[i]));

        printf("Percentage: %d\n", Percentage(TotalDegree(&S[i])));

        if (Percentage(TotalDegree(&S[i]))>=50){
            printf("Pass\n");
        } 
        else {
             printf("Fail\n");
        }

         
    }




return 0;
}

