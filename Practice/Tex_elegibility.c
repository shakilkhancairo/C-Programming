#include<stdio.h>

int main(){
    int age ;
    int salary;

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Entera your salary: \n");
    scanf("%d",&salary);

    if (age >= 18 && salary>=2000){
        printf("Eligible\n");
        
    }
    else{
        printf("Not Eligible\n");
    }
    return 0;
}