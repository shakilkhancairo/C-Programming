/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 1
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

// Write a C program to find the sum of N natural numbers [Take N input frome the user]


#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        sum = (N * (N + 1)) / 2;

        printf("The sum of the first %d natural numbers is: %d\n", N, sum);
    }

    return 0;
}



// Mam please review this code it run on online compilor but not int gcc

#include<stdio.h>

int main(){

    int N, sum, i;
    printf("Input the value of N: ");
    scanf("%d",&N);
    if (N <= 0)
    {
        printf("Enter a positive integer number: ");
    }
    else{
        for (int i = 1; i <= N; i++)
        {
           sum = sum + i;
        }
        
    }
    printf("The sum of the first %d natural numbers is: %d\n",N ,sum);
    

    return 0;
}
