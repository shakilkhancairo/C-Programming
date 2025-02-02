
/*
The output is--
5
9
15
25
43
77
143
273
531
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
            myArray[index1] = myArray[index1] + myArray[index2] - index1;
            index2 = index2 + 1;
        }
        printf("%d\n", myArray[index1]);
        index1 = index1 + 1;
    }
    return 0;
}