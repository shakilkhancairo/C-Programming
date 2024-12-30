#include<stdio.h>

int main(){
    float number[10];
    float largest;

    printf("Enter 10 numbers :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d = ", i+1);
        scanf("%f", &number[i]);
    }
    largest = number[0];
    for (int i = 0; i < 10; i++)
    {
        if (number[i] > largest)
        {
            largest = number[i];
        }
    }
    printf("The largest Number is: %2f\n", largest);
    
    return 0;
}