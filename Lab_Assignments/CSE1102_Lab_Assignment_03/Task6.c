/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/

#include <stdio.h>

int main() {
    int n, y = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            y -= i * i;
        } else {
            y += i * i;
        }
    }
    printf("The calculated value of y is: %d\n", y);

    return 0;
}
