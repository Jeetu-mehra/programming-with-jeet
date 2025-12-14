#include<stdio.h>
int main()
{
    int num, loc,arr[10],i;    
    printf("Enter the Array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Array is: ");
    for(i=0;i<10;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n Enter the number you want to insert: ");
    scanf("%d",&num);
    printf("Enter the location: ");
    scanf("%d",&loc);
    arr[loc]=num;
    printf("The Updated Array is: ");
    for(i=0;i<10;i++)
    {
        printf(" %d",arr[i]);
    }
}
