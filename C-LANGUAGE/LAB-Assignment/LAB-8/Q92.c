//92).WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *max;
    max=&a[0];
    for(int i=0;i<n;i++)
    {
       if(*(a+i)>*max)
        {
           max=a+i;
        }
    }
    printf("biggest number is :%d",*max);
}
