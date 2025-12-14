//23) program to read two no.s and calculate power without using header file<MATH.H>

#include<stdio.h>
int main(){
    int base,pow,expo=1;
    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the power:");
    scanf("%d",&pow);

    for(int i=1;i<=pow;i++){
        expo = expo * base;

    }
    printf("The value of the exponent is:%d",expo);

}