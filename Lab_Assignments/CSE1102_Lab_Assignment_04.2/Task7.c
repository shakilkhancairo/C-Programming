/*
The output is---
5
3
-5
-12
-12
-6
-1
-3
-11
*/

#include <stdio.h>

int main()
{
    int myArray[10];
    int index1 = 0, index2 = 0;

    // Initialize myArray with zeros
    for (int i = 0; i < 10; i++)
    {
        myArray[i] = 0;
    }
    index1 = 1;
    while (index1 < 10)
    {
        myArray[index1] = index1 + 4;
        index2 = 1;
        while (index2 < index1)
        {
            myArray[index1] = myArray[index1 - 1] - myArray[index2 - 1] - index1;
            index2 = index2 + 1;
        }
        printf("%d\n", myArray[index1]);
        index1 = index1 + 1;
    }
    return 0;
}