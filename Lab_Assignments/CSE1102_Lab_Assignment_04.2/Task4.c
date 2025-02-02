#include <stdio.h>

int isPresent(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int array_one[] = {1, 2, 2, 4, 5, 5, 7, 99, 200, 303, 70};
    int array_two[] = {1, 1, 2, 3, 3, 3, 4, 5, 200, 500, -5};
    int size_one = sizeof(array_one) / sizeof(array_one[0]);
    int size_two = sizeof(array_two) / sizeof(array_two[0]);
    int result[100];
    int resultSize = 0;

    for (int i = 0; i < size_one; i++) {
        if (!isPresent(result, resultSize, array_one[i])) {
            result[resultSize++] = array_one[i];
        }
    }

    for (int i = 0; i < size_two; i++) {
        if (!isPresent(result, resultSize, array_two[i])) {
            result[resultSize++] = array_two[i];
        }
    }

    printf("Updated Array: [");
    for (int i = 0; i < resultSize; i++) {
        printf("%d", result[i]);
        if (i < resultSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
