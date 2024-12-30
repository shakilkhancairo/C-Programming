#include <stdio.h>

int main() {
    int numbers[5];

    // Prompt user to enter 5 numbers
    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        // Read the current number into the array
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Print all numbers entered so far
        printf("Numbers in the array: [");
        for (int j = 0; j <= i; j++) {
            printf("%d", numbers[j]);
            if (j < i) {
                printf(", ");
            }
        }
        printf("]\n");
    }

    return 0;
}
