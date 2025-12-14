#include<stdio.h>
float fact(int num);
int main()
{
    int n,r;
    float result;
    printf("Enter The value of n: ");
    scanf("%d",&n);
    printf("Enter The value of r: ");
    scanf("%d",&r);
    result=fact(n)/(fact(r)*fact(n-r));
    printf("The ncr value is: %f",result);
}
float fact(int num)
{
    int i,factorial=1;
    for(i=1;i<=num;i++)
    {
        factorial=factorial*i; 
    }
    return factorial;
}