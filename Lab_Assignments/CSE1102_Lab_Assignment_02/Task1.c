/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 2
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

/*
Lab Task 1

Write a C program to compute and display a person’s weekly salary as determined by the
following conditions:
● If the hours worked is less than or equal to 40, then the person receives Tk 200 per hour.
● If the hours worked is greater than 40, then the person receives Tk 8000 plus Tk 300 for
each hour worked over 40 hours.
The program should request the hours worked as an input from the user and display the salary as
output. You need to make sure that user input is valid. For example, a person cannot work for -5
hours or more than 168 hours in a week. So, the valid hours range is 0 to 168. For invalid hours,
print outputs as given in the samples below.
Hint: you can consider the hour (user input) to be an integer
*/



#include<stdio.h>

int main(){
    int workTime;
    
    printf("Input your total working houre:  ");
    scanf("%d", &workTime);
    if (workTime < 0 && workTime >= 168)
    {
        printf("Enter a Valid Working Houre");
    }
    else if (workTime <= 40)
    {
        printf("So, Salary is %d\n", workTime*200);
        
    }else{
        printf("So, Salary is %d\n", 8000+(workTime - 40)*300);
    }

    return 0;
}