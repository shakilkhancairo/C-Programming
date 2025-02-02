/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 2
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

/*
Lab Task 4

Write the C code of a program that reads an integer, and prints the integer it is a multiple of either
2 or 5 but not both. If the number is a multiple of 2 and 5 both, then print "Multiple of 2 and 5
both". For all other numbers, the program prints "Not a multiple we want".
For example, 2, 4, 5, 6, 8, 12, 14, 15, 16, 18, 22 ... i.e. this includes multiples of 2 only and
multiples of 5 only, NOT multiples of 2 and 5 both or other numbers.
hint(1): we may use the modulus (%) operator for checking the divisibility
hint(2): we can consider the number to be an integer
*/

#include<stdio.h>

int main(){

    int number;
    printf("Input a number: ");
    scanf("%d",&number);

    if (number%2==0 && number%5==0){
        printf("The Number is Multiple of 2 and 5 both");
    }
    else if (number%2==0)
    {
        printf("The Number is Multiple of 2");
    }
    else if (number%5==0){
        printf("The Number is Multiple of 5");
    }
    else{
        printf("The Number is NOT multiples of 2 or 5 both");
    }

    return 0;
}