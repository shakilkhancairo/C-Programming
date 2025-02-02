// diclare an array and initialize an array and then print them
#include <stdio.h>

int main()
{
    int a[5];
    a[0] = 1;
    a[1] = 3;
    a[2] = 5;
    a[3] = 7;
    a[4] = 8;
    // or

    int b[] = {4, 2, 5, 7, 8};

    // Lets print these array
    //  to print a[a]
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    // to print b[]
    int lanth = sizeof(b) / b[0];
    printf("or Array b = { ");
    for (int i = 0; i < lanth; i++)
        if (i == 4) {
            // For the last element, don't print a comma
            printf("%d", a[i]);
        } else {
            // For all other elements, print with a comma
            printf("%d ,", a[i]);
        }
        printf(" }");
    return 0;
}