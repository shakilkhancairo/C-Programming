/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/


#include<stdio.h>

int main(){
    char car[100];
    int num;

    printf("Enter the name of your favorite car: ");
    scanf("%s", &car);
    printf("Enter the number of Print: ");
    scanf("%d",&num);

    for ( int i = 0; i < num; i++)
    {
        printf("%s\n",car);
    }
    

    return 0;
}