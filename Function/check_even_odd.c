/*
Problem ----
Write a program that will reads a number from terminal
and determine whether this number is ‘odd’ or ‘even’ and
print the message- number is even or number is odd.
*/



#include<stdio.h>

void even_odd(int num){
    if (num % 2 == 0)
        {
            printf("%d is an Even\n",num);
    }else {printf("%d is an odd\n",num);}
}

int main(){
    int x;
    printf("Enter the num = ");
    scanf("%d",&x);
    even_odd(x);

    return 0;
}