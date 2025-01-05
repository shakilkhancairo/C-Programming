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
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("0\n");
    }

    while (number > 0) {
        int digit = number % 10;
        printf("%d", digit);
        number /= 10;
        if (number > 0) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}
