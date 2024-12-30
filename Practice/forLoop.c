#include<stdio.h>

int main() {
    int i;

    printf("Using for loop\n");
    for(i = 1; i <= 10; i++){
        printf("%d\n", i);
    }

    printf("Using While Loop\n");
    i = 1;
    while(i < 10){
        printf("%d\n", i);
        i++;
    }

    printf("When we increment first\n");
    i = 0;
    while(i < 10){
        i++;
        printf("%d\n", i);
    }

    return 0;
}
