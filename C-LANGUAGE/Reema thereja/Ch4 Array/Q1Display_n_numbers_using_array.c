#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values in the array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements in Array are: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}