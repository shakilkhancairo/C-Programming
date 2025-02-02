/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 1
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

/*
Write a C program that reads 3 integers A, B, and C respectively, and then reads a floating-point 
number D. After reading, the program should print the result (as int) using the given formula 
below.
Formula: A^C + (2*B) * (A/2) - D/3
*/

#include<stdio.h>
#include<math.h>

int main(){

    int A, B, C;
    float D;
    int formula;

    printf("Input a Integer value of A: ");
    scanf("%d",&A);
    printf("Input a Integer value of B: ");
    scanf("%d,",&B);
    printf("Input a Integer value of c: ");
    scanf("%d",&C);
    printf("Intput the floating value of D: ");
    scanf("%f", &D);

    formula = pow(A,C) + (2*B) * (A/2) - D/3;

    printf("The result of the Formula is: %d",formula);

    return 0;
}
