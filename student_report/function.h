//int scan(student g1[], int size); //student scan (); combine the two -- student scan (g[], int size)
// uint32_t calc_total(student s);
//float calc_percentage (student s);
//void print_report(student S); (for one student)

#include <stdio.h>
#include<stdint.h>

#ifndef STRUCT_H
#define STRUCT_H


typedef struct 
{

uint8_t Name[20];
uint8_t age;
uint16_t Level;
uint16_t sub[3];

}student;

#define total_grade 180

void scan_name(student *S);
void scan_age(student *S);
void scan(student *S);

int32_t TotalDegree(student *S);
int32_t Percentage(int32_t total);

#endif

