#include<stdio.h>
int main()
{
    int N,num,m,count=0;
    printf("Enter any number: ");
    scanf("%d",&N);
    num=N;
    while(num!=0)
    {
        m=num%10;
        if(m!=0 && N%m==0)
        {
            count=count+1;
        }
        num=num/10;
    }
    printf("%d",count);
}