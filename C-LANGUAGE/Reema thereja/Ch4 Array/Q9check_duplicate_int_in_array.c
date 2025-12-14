#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values in the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int t=1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("yes, duplicate integer in array is present \n");
                t=0;
                break;
            }      
        }
        if(t==0)
        {
            break;
        }
    }
    if(t==1)
    {
        printf("No duplicate");
    }
}

