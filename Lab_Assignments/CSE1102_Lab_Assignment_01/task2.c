/*
Course Title: Structured Programming Language
Course Code: CSE 1102
Assignment no: 1
Student Name: SHAKI KHAN
Student ID: 41240202356
*/

// Write a C program that reads two integers M and N respectively and finds the value of M^N and prints the value exactly as shown in the examples below. Your code should work correctly for any other sample inputs. (10^3: 1000)


#include<stdio.h>


int main(){

    int M,N;
    printf("Enter first intiger number: ");
    scanf("%d",&M);
    printf("Enter second Integer number: ");
    scanf("%d",&N);
    long long result =1;
    if (N==0)
    {
        result=1;
    }
    else{
        for ( int i = 0; i < N; i++)
        {
            result *= M;
        }
        
    }

    printf("So the value of %d^%d: %lld\n",M,N,result);

    return 0;
}