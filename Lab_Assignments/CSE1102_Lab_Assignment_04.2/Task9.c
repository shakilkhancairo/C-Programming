/*
The output is--
2
0
-1
-5
-11
-22
-40
-70
-119
*/

#include <stdio.h>

int main() {
int myArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int *b;
int index1 = 0, index2 = 0;

// Assign myArray to b
b = myArray;
index1 = 1;
while (index1 < 10) {
myArray[index1] = index1 + 1;
index2 = 1;
while (index2 < index1) {
myArray[index1] = b[index2 - 1] + myArray[index2] - index1;
index2 = index2 + 1;
}
printf("%d\n", myArray[index1]);
index1 = index1 + 1;
}
return 0;
}