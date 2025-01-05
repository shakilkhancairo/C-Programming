/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/


// a) Sequence: 24, 18, 12, 6, 0, -6
#include <stdio.h>

int main() {
    for (int i = 24; i >= -6; i -= 6) {
        printf("%d ", i);
    }
    return 0;
}


//b) Sequence: -10, -5, 0, 5, 10, 15, 20
#include <stdio.h>

int main() {
    for (int i = -10; i <= 20; i += 5) {
        printf("%d ", i);
    }
    return 0;
}


//c) Sequence: 18, 27, 36, 45, 54, 63
#include <stdio.h>

int main() {
    for (int i = 18; i <= 63; i += 9) {
        printf("%d ", i);
    }
    return 0;
}


// d) Sequence: 18, -27, 36, -45, 54, -63
#include <stdio.h>

int main() {
    for (int i = 1; i <= 6; i++) {
        int value = i * 9;  // Values: 9, 18, 27, etc.
        if (i % 2 == 0) {
            printf("%d ", value);
        } else {
            printf("%d ", -value);
        }
    }
    return 0;
}

