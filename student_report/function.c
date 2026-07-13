#include <stdio.h>
#include<stdint.h>
#include "function.h"



void scan_name(student *S){

   scanf("%s", S->Name);
   
}

void scan_age(student *S){

   scanf("%hhd", &S->age);
  
}

void scan(student *S){

   scanf("%hd", &S->Level);
}
int32_t TotalDegree(student *S)
{
    int32_t total = 0;
    for (int i=0; i<3; i++)
    {
       total+= S->sub[i];
    }
    return total;

}
int32_t Percentage(int32_t total)
{
    int32_t percent=(total*100)/total_grade;
      return percent;

}