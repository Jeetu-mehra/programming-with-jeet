#include<stdio.h>
int sum(int a, int b);

int main()
{
    int a,b;
    printf("Enetr The value of a: ");
    scanf("%d",&a);
    printf("Enetr The value of b: ");
    scanf("%d",&b);
    printf("The sum of The numbers is: %d",sum(a,b));
}

sum(int p,int q)
{
    int sum;
    sum=p+q;
}
