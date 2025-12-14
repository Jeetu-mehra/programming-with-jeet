//41)Read a number N and print factor of N.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter The value of N: ");
    scanf("%d",&n);
    printf("The prime factors are: ");
    for(i=1;i<=n;i++){
        if (n%i==0){

        printf("%d, ",i);
        }
    }
}