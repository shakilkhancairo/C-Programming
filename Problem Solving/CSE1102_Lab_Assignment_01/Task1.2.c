/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 1
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

//  1.2  Take  two  integer  inputs  from  the  user  and  print  their  summation  and multiplication


#include<stdio.h>

int main(){

    int a, b;

    printf("Enter the first Number: ");
    scanf("%d",&a);

    printf("Enter the second Number: ");
    scanf("%d",&b);

    printf("The sum of integer numbers is: %d\n", a+b);
    printf("The multiplication of integer numbers is: %d\n", a*b);

    return 0;
}