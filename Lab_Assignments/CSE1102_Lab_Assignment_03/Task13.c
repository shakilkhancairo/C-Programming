/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Divisors of %d are:\n", num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
            count++;
        }
    }

    printf("Total %d divisors.\n", count);

    return 0;
}
