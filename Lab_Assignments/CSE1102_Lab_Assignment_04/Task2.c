#include <stdio.h>

int main() {
    int arr[100];
    int n;

    // Input the array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not possible\n");
        return 0;
    }

    // Input the array elements
    printf("Enter the elements of the array separated by spaces: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if slicing is possible
    if (n <= 4) {
        printf("Not possible\n");
    } else {
        int newSize = n - 4;

        // Print the new array
        printf("[");
        for (int i = 2; i < n - 2; i++) {
            printf("%d", arr[i]);
            if (i < n - 3) {
                printf(", ");
            }
        }
        printf("]\n");
    }

    return 0;
}
