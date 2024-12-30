#include <stdio.h>
#include <stdlib.h>

int main() {
    int i[10], j;
    for (j = 0; j < 10; j++) {
        i[j] = j;
    }
    for (j = 0; j < 10; j++) {
        printf("i[%d] = %d\n", j, i[j]);
    }

    return 0; 
}
