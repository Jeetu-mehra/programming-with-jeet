#include<stdio.h>
int main()
{
    int n,i;
    float sum=0;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values of integers \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("The mean of elements is: %f",sum/n);
}