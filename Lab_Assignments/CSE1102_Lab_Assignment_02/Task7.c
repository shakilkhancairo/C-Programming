/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 2
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

/*
The output of This code is
2
10
-1
100
False
*/

#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = -3;
    int num3 = -1;
    int sum = num1 + num2 + num3;

    if (num3 < 0) {
        printf("%d\n", num3 * -2);
    } else {
        printf("%d\n", sum);
    }

    if (num1 < 5) {
        printf("%d\n", num1 + 10);
    } else if (num2 == -3) {
        num2 = num1;
        printf("%d\n", num2);
    } else {
        printf("%d\n", num1 + num2 + num3);
    }

    if (num1 > 15) {
        printf("%d\n", num1);
    } else if (num2 == 0) {
        printf("%d\n", num2 + num3);
    } else {
        printf("%d\n", num3);
    }

    if (sum != 0) {
        printf("100\n");
    } else {
        printf("%d\n", sum + 100);
    }

    if (num1 > 0 && num2 < 0) {
        printf("%s\n", num1 == num2 ? "True" : "False");
    } else {
        printf("False\n");
    }

    return 0;
}


