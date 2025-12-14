#include<stdio.h>
int main()
{
    int num,n,i;
    printf("Enter the No. of elements in array: ");
    scanf("%d",&n);
    int arr[n];    
    printf("Enter the Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Array is: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n Enter the number you want to insert: ");
    scanf("%d",&num);
    arr[n]=num;
    printf("The Updated Array is: ");
    for(i=0;i<6;i++)
    {
        printf(" %d",arr[i]);
    }
}
