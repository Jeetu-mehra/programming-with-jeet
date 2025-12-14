#include<stdio.h>
int main()
{
    int num, loc,arr[10],i;    
    printf("Enter the Array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Array is: ");
    for(i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n Enter the location you want to delete: ");
    scanf("%d",&loc);
    for(i=loc;i<4;i++)
    {
        arr[i]=arr[i+1];
    }

    printf("The Updated Array is: ");
    for(i=0;i<4;i++)
    {
        printf(" %d",arr[i]);
    }
}
