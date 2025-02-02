/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 2
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

/*
Lab Task 2

Write the C code of a program that finds the number of hours, minutes, and seconds in a given
number of seconds. The number of seconds is taken as input from the user.
hint(1): This is not a branching problem. We may consider our user input to be an integer value
and use just '/' and '%' operators to solve the problem
hint(2): 1 hour = 60 minutes = 3600 seconds and 1 minute = 60 seconds
*/

#include <stdio.h>

int main()
{

    int second, x;
    printf("Enter an Integer number of second: ");
    scanf("%d", &second);
    printf("Hours: %d\n", second / 3600);
    printf("Minutes: %d\n", (second % 3600) / 60);
    printf("Seconds: %d\n", (second % 3600) % 60);
    return 0;
}