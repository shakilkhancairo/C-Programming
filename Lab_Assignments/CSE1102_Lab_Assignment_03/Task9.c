/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/

#include<stdio.h>

int main(){
    int num;
    int sum = 0;

    for (int i = 1; i <= 5; i++)
    {
       printf(" Enter the %d number = ",i);
       scanf("%d",&num);
       sum += num;
       printf("%d\n",sum);
    }

    return 0;
}