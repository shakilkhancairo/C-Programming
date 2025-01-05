#include <stdio.h>

int main()
{

    int arr[5];
    int smallest, largest, smallestIndex, largestIndex;

    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    smallest = largest = arr[0];
    smallestIndex = largestIndex = 0;

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallestIndex = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            largestIndex = i;
        }
    }
    printf("My Array: {");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
        if (i < 4)
            printf(", ");
    }
    printf("}\n");
    printf("Smallest number in the Array is %d which was found at index %d\n", smallest, smallestIndex);
    printf("Largest number in the Array is %d which was found at index %d\n", largest, largestIndex);

    return 0;
}