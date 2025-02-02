/*
The output is--
3
1
-2
-6
-11
-17
-24
-32
-41
*/

#include <stdio.h>

int main() {
int myArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int b[10];
int index1 = 0, index2 = 0;

// Copy myArray to b
for (int i = 0; i < 10; i++) {
b[i] = myArray[i];
}
index1 = 1;
while (index1 < 10) {
myArray[index1] = index1 + 2;
index2 = 1;
while (index2 < index1) {
myArray[index1] = b[index1] + myArray[index2] - index1;
index2 = index2 + 1;
}
printf("%d\n", myArray[index1]);
index1 = index1 + 1;
}
return 0;
}