/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/


#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, count = 0, div;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    div = (int) pow(10, count - 1);

    printf("Digits: ");
    while (div > 0) {
        int digit = num / div;
        printf("%d", digit);

        if (div > 1) {
            printf(", ");
        }

        num %= div;
        div /= 10;
    }
    
    printf("\n");

    
    return 0;
}
