//31) program to print sum of individual digits of a N digit no.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    while(n!=0){
        i = n % 10;
        n = n/10;
        sum = sum + i;
    }
    printf("The sum of all the digits is: %d", sum);
    return 0;
}