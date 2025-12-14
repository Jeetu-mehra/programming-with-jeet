#include<stdio.h>
int main()
{
    int n,i,small,pos=0;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values in the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    small=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            pos=i+1;
        }
    }

    printf("The smallest no. is: %d at %d position",small,pos);
}

