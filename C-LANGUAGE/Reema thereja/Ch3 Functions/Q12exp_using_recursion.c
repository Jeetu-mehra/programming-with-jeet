#include<stdio.h>
int exp(int num1,int num2);
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("The exp of (%d,%d) is %d",a,b, exp(a,b));

}

int exp(int num1,int num2)
{
    int result;
    if(num2==0)
    {
        return 1;
    }
    else
    {  
        result = num1 * exp(num1,num2-1);
        return result;
    }
}