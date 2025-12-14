//74)Given are one dimensional arrays A and B which are sorted in ascending order. 
// Write a program to merge them into a single sorted array C that contains every 
// item form array A and B, in ascending order.

#include<stdio.h>
int main()
{
    int n=5;
    int a[n],b[n],count=0, temp;
    printf("Enter elements in Array A :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=n-1; j>=0; j--)
    {
    for(int i=0; i<j; i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }


    printf("Enter elements in Array B :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int j=n-1; j>=0; j--)
    {
    for(int i=0; i<j; i++)
    {
        if(b[i]>b[i+1])
        {
            temp=b[i];
            b[i]=b[i+1];
            b[i+1]=temp;
        }
    }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
    }

    int size=(2*n)-count;
    int c[size], flag;
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
        if(b[i]==a[j])
        {
            flag=1;
            break;
        }
        }
        if(flag!=1)
        {
            c[n+i-count]=b[i];
        }
    }

    for(int j=size-1; j>=0; j--)
    {
    for(int i=0; i<j; i++)
    {
        if(c[i]>c[i+1])
        {
            temp=c[i];
            c[i]=c[i+1];
            c[i+1]=temp;
        }
    }
    }

    printf("The final Array :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}