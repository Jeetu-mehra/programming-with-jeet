//71) Write a program in C to find the pivot element of a sorted and rotated array 
// using binary search. Pivot element is the only element in input array which is 
// smaller than its previous element. A pivot element divided a sorted rotated array 
// into two monotonically increasing array.

#include<stdio.h>
#include<stdlib.h>
#define n 5
int main()
{
    int a[n], temp, limit, count=0;
    printf("Enter Values in The Array");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
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
    printf("Enter how many times You want to rotate");
    scanf("%d", &limit);

    int b[limit], c[n-limit];

    for(int i=0;i<limit;i++)
    {
        int temp=a[n-1];
        for (int i=n-1;i>0;i--)
        {
        a[i]=a[i-1];
        }
        a[0]=temp;
    }

    printf("\nValues after Sort and Rotation in Array :\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    
    for(int j=0;j<limit;j++)
    {
        b[j]=a[j];
    }
    
    for(int i=0,j=limit;j<n&&i<n-limit;j++, i++)
    {
        c[i]=a[j];
    }

    printf("\nThe value of the First Array :\n");
    for(int i=0; i<limit; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\nThe value of the Second Array :\n");
    for(int i=0; i<n-limit; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}