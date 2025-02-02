/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 1
Student Name: SHAKI KHAN
Student ID: 41240202356
*/


#include<stdio.h>

int main(){

    int chocolates, forYou, forFriendes;

    printf("Enter the number of chocolates: ");
    scanf("%d",&chocolates);

    if (chocolates < 3)
    {
        printf("you don't have enough chocolates to distribute\n");
    }
    else{
        forYou = chocolates % 3;
        forFriendes= (chocolates-forYou)/3;
        printf("Each friend will recive: %d\n",forFriendes);
        printf("the number of remainig chocolet: %d\n",forYou);
    }

    return 0;
}