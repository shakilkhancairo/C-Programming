/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("+");
        }
        printf("\n");
    }

    return 0;
}
