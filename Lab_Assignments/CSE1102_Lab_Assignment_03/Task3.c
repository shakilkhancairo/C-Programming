/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/

#include <stdio.h>

int main() {
    int sum = 0;

    printf("The sum of Multiples of both 7 and 9 up to 600 are:\n");

    for (int i = 63; i <= 600; i += 63) {
        sum += i;
        printf("%d", i);

        if (i + 63 <= 600) {
            printf(" + ");
        }
    }

    printf(" = %d\n", sum);

    return 0;
}
