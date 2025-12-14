#include<stdio.h>
float fact(int num);
int main()
{
    int i,n;
    float result;
    printf("Enter the value of n to get the value of 1/1!+1/2!+1/3!+...+1/n!: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result = result + 1/fact(i);        
    }
    printf("The value of 1/1!+1/2!+1/3!+...+1/n! is %f",result);

}
float fact(int num)
{
    int i,n,factorial=1;
    for(i=1;i<=num;i++)
    {
        factorial=factorial*i;        
    }    
    return (factorial);
}