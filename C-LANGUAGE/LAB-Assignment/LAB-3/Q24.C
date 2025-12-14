// 24) WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
//  1+x where n=1
// 1+x/n where n=2
// 1 +xn when n=3
// 1 + nx when n>3 or n<1

#include<stdio.h>
#include<math.h>
int main(){
    int x,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    if(n==1){
        printf("%d",1+x);
    }
    if(n==2){
        printf("%d",1 + x/n);
    }
    if(n==3){
        printf("%f",1 + (pow(x,n)));
    }
    if(n>3||n<1){
        printf("%d",1 + x*n);
    }
}