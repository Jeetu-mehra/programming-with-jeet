#include<stdio.h>
#include<math.h>
float fact(int num);
int main()
{
    int i,n,power;
    float result;
    printf("Enter the value of n to get the value of 1/1!+4/2!+27/3!+...: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        power=pow(i,i);
        result = result + power/fact(i);        
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