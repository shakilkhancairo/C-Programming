/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/


#include<stdio.h>

int main(){
    int N;
    int sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&N);
    for (int i = 7; i <= N; i+=7)
    {
        sum += i;
    }
    printf("The summation of N is %d",sum);
    return 0;
}