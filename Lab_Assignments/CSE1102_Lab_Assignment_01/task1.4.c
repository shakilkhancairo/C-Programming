/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 1
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

//1.4  take two integers and swap the numbers without using a temporary variables


#include<stdio.h>

int main(){

    int x=5, y=3;
    printf("before swap x = %d and y = %d\n",x ,y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("after swap x = %d and y = %d\n",x,y);



    return 0;
}