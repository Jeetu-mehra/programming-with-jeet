//Q83 write a function to read an array and find out maximum.
#include<stdio.h>
int arr(int a);
void main()
{
    int n;
    printf("enter length of array");
    scanf("%d",&n);
    arr(n);
}




int arr(int a)
{   
    int m[a];
    printf("enter arrays of number");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&m[i]);
    }
    int max;
    max=m[0];
    for(int i=0;i<a;i++)
    {
        if(max<m[i])
        {
            max=m[i];
        }
    }
    printf("max num is array is=%d",max);
}