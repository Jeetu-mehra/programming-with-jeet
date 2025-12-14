#include<stdio.h>
int fibo(int num);
int main()
{
    int n,i;
    printf("Print the number of terms in fibonacci series: ");
    scanf("%d",&n);
    printf("The fibonacci series is: ");
    for(i=0;i<n;i++)
    {
        //printf("\n fibonacci (%d) = %d",i,fibo(i));
        printf("%d, ",fibo(i));
    }

}

int fibo(num) 
{
    if (num==0)
    {
        return 0;
    }
    else if (num<2)
    {
        return 1;
    }
    else
    {
        return (fibo(num-1)+fibo(num-2));
    }

}