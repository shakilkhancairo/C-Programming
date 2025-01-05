/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 2
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

/*
Lab Task 5

Write a C program that takes an hour from the user as input and tells it is time for which meal.
• The user will input the number in a 24-hour format. So, 14 means 2 pm, 3 means 3 am, 18
means 6 pm, etc.
• Valid inputs are 0 to 23. Inputs less than 0 or more than 23 are invalid in 24-hour clock.
• Assume, input will be whole numbers. For example, 3.5 will NOT be given as input.

Input range: Message to be printed
4 to 6: Breakfast
12 to 13: Lunch
16 to 17: Snacks
19 to 20: Dinner
For all other valid inputs, say "Patience is a virtue"
For all other invalid inputs, say "Wrong time"
*/

#include<stdio.h>

int main(){

    int time;
    printf("Enter the hour (0-23) in 24-hour format: ");
    scanf("%d",&time);

    if (time>=0 && time<=23)
    {
        if(time>=4 && time<=6){
            printf("Breakfast Time");
        }
        else if (time>=12 && time<=13)
        {
            printf("Lunch Time");
        }
        else if (time>=16 && time<=17){
            printf("Snacks Time");
        }
        else if (time>=19 && time<=20){
            printf("Dinner Time");
        }
        else{
            printf("Patience is a virtue");
        } 
    }
    else{
        printf("Wrong time");
    }
    
    return 0;
}