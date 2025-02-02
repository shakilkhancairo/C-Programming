#include<stdio.h>

int main(){
    int a[5], i;
    int prime;

    printf("Enter a 5 numbers:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Number %d\n",i+1);
        scanf("%d",& a[i]);
    }
    int primecount = 0;
    for (int i =0; i<5; i++){
        int num = a[i];
        int prime =0;
        if(prime<2){
            printf("pirme = 0");
        }else{
            for ( int j=2; j*j <= num; j++){
                if(num %j== 0){
                    prime = 0;
                    break;
                }
            }
        }
    }
        if (prime) {
            primecount++;
        }
    printf("prime number is %d",primecount);
    
    return 0;
}