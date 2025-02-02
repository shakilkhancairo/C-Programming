/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/


#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number == 0) {
        count = 1;
    } else {
        while (number != 0) {
            number = number / 10;
            count++;
        }
    }

    printf("The number of digits is: %d\n", count);

    return 0;
}
