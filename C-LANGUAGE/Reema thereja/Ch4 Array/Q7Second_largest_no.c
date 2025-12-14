#include<stdio.h>
int main()
{
    int n,i,large,slarge;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values in the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    large=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    slarge=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]!=large)
        {
            if(arr[i]>slarge)
            {
                slarge=arr[i];
            }
        }
    }    
    printf("The Second Largest no. is: %d",slarge);
}

