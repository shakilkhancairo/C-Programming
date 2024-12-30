/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/

#include<stdio.h>

int main(){
    int i;
    for(i=11; i < 50; i+=2){
        printf("%d",i);
        if (i + 2 < 50) { 
            printf(", ");
            }
    }

    return 0;
}