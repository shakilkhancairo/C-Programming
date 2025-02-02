/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 2
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

/*
Write the C code of a program that reads a student’s mark for a single subject, and prints out the
corresponding grade for that mark. The mark ranges and corresponding grades are shown in the
table below. You need to make sure that the mark is valid. For example, a student cannot receive
-5 or 110 marks. So, the valid marks range from 0 to 100.
hint(1): you can consider the number to be an integer
hint(2): this problem can be solved in two ways: top-down (starts from A) and bottom-up (starts
from F)

Marks Grade
90 or above A
80-89 B
70-79 C
60-69 D
50-59 E
Below 50 F
*/


#include<stdio.h>

int main(){

    int mark;
    printf("Enter the mark (0-100) : ");
    scanf("%d",&mark);

    if (mark>=0 && mark<=100)
    {
        if(mark>=90 && mark<=100){
            printf("A");
        }
        else if (mark>=80 && mark<=89)
        {
            printf("B");
        }
        else if (mark>=70 && mark<=79){
            printf("C");
        }
        else if (mark>=60 && mark<=69){
            printf("D");
        }
        else if (mark>=50 && mark<=59){
            printf("E");
        }
        else{
            printf("F");
        } 
    }
    else{
        printf("Wrong mark");
    }
    
    return 0;
}