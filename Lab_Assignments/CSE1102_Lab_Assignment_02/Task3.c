/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 2
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

/*
Lab Task 3

Write the C code of a program that reads two numbers, subtracts the smaller number from the
larger one, and prints the result.
Hint: First, we may check which number is greater
*/

#include<stdio.h>

int main(){

    int num1, num2;
    printf("input NumberOne: ");
    scanf("%d",&num1);
    printf("input NumberTow: ");
    scanf("%d",&num2);

    if(num1>= num2){
        printf("The result of Subtraction is: %d", num1-num2);
    }else{
        printf("The result of Subtraction is: %d", num2-num1);
    }

    return 0;
}