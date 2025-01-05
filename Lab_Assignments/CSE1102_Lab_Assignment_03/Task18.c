/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 3
Student Name: SHAKIL KHAN
Student ID: 41240202356
*/


#include <stdio.h>

int main() {
    int M, N;

    printf("Enter the number of rows (M): ");
    scanf("%d", &M);
    printf("Enter the number of columns (N): ");
    scanf("%d", &N);

    for (int i = 0; i < M; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
