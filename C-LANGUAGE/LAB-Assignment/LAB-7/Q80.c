//Q80 write a function that will generate and print the N first fibonacci numbers. test the function for n=5,10 and 15.
#include <stdio.h>
int fibonacci(int n){
    int a=0,b=1,c,i;
    printf("%d %d",a,b);
    for(i=0;i<=n-3;i++){
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
}

int main(){
    int N;
    printf("Enter the value of n: ");
    scanf("%d",&N);
    fibonacci(N);
}