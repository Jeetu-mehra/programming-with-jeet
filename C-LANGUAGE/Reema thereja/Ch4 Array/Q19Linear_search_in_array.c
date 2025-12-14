#include<stdio.h>
int main()
{
    int n,i,num,t;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values in the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n Enter the no. you want to search in array \n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            t=1;
        }
    }
    if(t==1)
    {
        printf("The Given no. is present in this array");
    }
    else
    {
        printf("The given no. is not present in array");
    }
}

