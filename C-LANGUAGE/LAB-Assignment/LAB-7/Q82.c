//Q82 write a function to calculate (nCr) factorial of a given number.
#include <stdio.h>
int factorial(int n){
    int i,fact=1;
    for(i=n;n!=0;i--){
        fact=fact*n;
    }
    printf("%d",fact);
}

int main(){
    int N;
    printf("Enter the value of n: ");
    scanf("%d",&N);
    factorial(N);
}