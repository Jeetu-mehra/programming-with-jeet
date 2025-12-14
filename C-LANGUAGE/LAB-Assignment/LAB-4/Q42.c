//42) Read a number N and print if N is prime or composite.
#include<stdio.h>
int main(){
    int i,n,p;
    printf("Enter any no: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            break;
        }
    }
    if (i==n){
        printf("The given no. is prime");}
    else{
         printf("The given no. is composite");
    }
}