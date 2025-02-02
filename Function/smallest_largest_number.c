#include<stdio.h>
void small_larg_num(int a[5]){
    int largest, smallest, small_location, Larg_location;

    largest = smallest = a[0];
    small_location = Larg_location = 0;

    for (int i = 1; i < 5; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
            small_location = i;
        }
        if (a[i] > largest)
        {
            largest = a[i];
            Larg_location = i;
        }
    }
    printf("The largest number is %d\n and the largest number location is %d \n", largest, Larg_location);
    printf("The smallest number is %d\n and the Smallest number location is %d\n",smallest, small_location);
}

int main(){
    int b[5];
    printf("Enter 5 intiger numbers\n");
    for (int i = 0; i < 5; i++)
        scanf("%d",&b[i]);
    
    small_larg_num(b);

    return 0;
}