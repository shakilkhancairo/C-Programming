/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 1
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

//  1.3  Take one integer input and one float input from the user and print their addition and subtraction in the same line separated by a space
#include<stdio.h>

int main(){

    int a;
    float b;

    printf("Input a integer number: ");
    scanf("%d", &a);
    printf("Input a float number: ");
    scanf("%f", &b);

    float addition = a+b;
    float subtraction = a-b;


    printf(" The addition is: %f   The subtraction is: %f\n",addition, subtraction);



    return 0;
}