#include<stdio.h>
int main()
{
    int i,n,temp,small,psmall,large,plarge;
    printf("Enter the no. of eleents in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    large=arr[0];
    small=arr[0];

    for(i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
            plarge=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            psmall=i;
        }
    }

    temp=arr[psmall];
    arr[psmall]=arr[plarge];
    arr[plarge]=temp;
    
    printf("\n The Updated Array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}