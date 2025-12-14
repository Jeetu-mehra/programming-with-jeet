#include<stdio.h>
int main()
{
    int n,i,large,small,pl,ps,temp;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values in the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    large=arr[0];
    small=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
            pl=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=small)
        {
            small=arr[i];
            ps=i;
        }
    }

    temp=arr[pl];
    arr[pl]=arr[ps];
    arr[ps]=temp;
    printf("The new array is: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}

