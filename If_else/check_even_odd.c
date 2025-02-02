/*
Problem ----
Write a program that will reads a number from terminal
and determine whether this number is ‘odd’ or ‘even’ and
print the message- number is even or number is odd.
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the num = ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is an Even\n", num);
    }
    else
    {
        printf("%d is an odd\n", num);
    }
    return 0;
}