/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 1
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

/* 2.  A sailor has a boat known as Téssares Boat, which has four corners. 
The boat is capable of carrying goods of any weight as long as there is equal 
distribution of loads on each corner of the boat 
- the center area has been occupied by the engine. 
The sailor needs your help to know themaximum amount of weight he can carry in each shipment.

Write a C program that reads the total weight of the shipment and prints the maximum load (or 
weight) the boat can take from the given shipment. We can assume that the weight of each good 
is exactly 1 unit, therefore, the weight of 5 units means there are 5 (loose) items in the shipment.
*/

#include<stdio.h>

int main(){

    int totalweight, maxload;
    
    printf("Enter the amount of totalWeight: ");
    scanf("%d",&totalweight);
    if ( totalweight % 4 == 0)
    {
        printf("The maxload is: %d", totalweight);
    }
    else{
        maxload = totalweight - (totalweight % 4);
        printf("The maxload is: %d\n",maxload );
    }
    // or........

    maxload = totalweight - (totalweight % 4);
    printf("The maxload is: %d\n",maxload );

    return 0;
}