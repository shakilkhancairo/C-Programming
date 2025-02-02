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

    // Loop through numbers up to 600
    for (int i = 1; i <= 600; i++) {
        // Check if the number is a multiple of 7 or 9, but not both
        if ((i % 7 == 0 || i % 9 == 0) && !(i % 7 == 0 && i % 9 == 0)) {
            sum += i;  // Add the number to the sum
        }
    }

    // Print the final sum
    printf("The sum of multiples of either 7 or 9 but not both up to 600 is: %d\n", sum);

    return 0;
}
