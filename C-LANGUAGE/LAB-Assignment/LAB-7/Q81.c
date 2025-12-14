//Q81 write a function that will return 1 if its argument is prime number and return zero otherwise.
#include <stdio.h>
int is_prime(int n){
    int i;
    for(i=2;i<=n;i++){
        if(n%i==0){
            break;
        }
    }
    if(i==n){
        printf("1");
    }    
    else{
        printf("0");
    }
}

int main(){
    int N;
    printf("Enter the value of n: ");
    scanf("%d",&N);
    is_prime(N);
}