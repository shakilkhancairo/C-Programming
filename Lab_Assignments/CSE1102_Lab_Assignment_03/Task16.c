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
    float num, max, min, sum = 0;

    printf("Enter the quantity of numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%f", &num);

    max = min = sum = num;

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }

        sum += num;
    }

    printf("Maximum %.2f\n", max);
    printf("Minimum %.2f\n", min);
    printf("Average is %.2f\n", sum / n);

    return 0;
}
