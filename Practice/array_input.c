#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int i, a[5];
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++){
        printf(" %d", a[i]);
    }

    return 0;
}