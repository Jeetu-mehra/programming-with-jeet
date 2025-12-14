#include<stdio.h>
int main()
{
    int n,i;
    float median;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values in the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n%2==0)
    {
        median= (float)((arr[n/2-1] + arr[n/2]))/2;
    }
    else
    {
        median=arr[n/2];
    }
    printf("The mediun is: %f",median);
}

