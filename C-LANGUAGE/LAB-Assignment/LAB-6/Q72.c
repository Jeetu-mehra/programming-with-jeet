//72)Write a program in C to rotate an array by N positions.
#include<stdio.h>
#define n 6
int main()
{
    int a[n], b[n], limit, temp;
    printf("Enter how many times You want to rotate");
    scanf("%d", &limit);

    printf("Enter the Array Element");
    for(int i=0;i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0;i<limit;i++)
    {
        int temp=a[n-1];
        for (int i=n-1;i>0;i--)
        {
        a[i]=a[i-1];
        }
        a[0]=temp;
    }

    printf("the Array after rotation");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}