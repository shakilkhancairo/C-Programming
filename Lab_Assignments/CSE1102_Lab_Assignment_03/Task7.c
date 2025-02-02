/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/


#include <stdio.h>

int main() {
    int number;
    int total = 0;
    int count = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &number);

        if (number % 2 != 0) {
            total += number;
            count++;
        }
    }

    if (count > 0) {
        float average = (float)total / count;  //
        printf("The total of the odd numbers is %d and their average is %f\n", total, average);
    } else {
        printf("No odd numbers were entered.\n");
    }

    return 0;
}
