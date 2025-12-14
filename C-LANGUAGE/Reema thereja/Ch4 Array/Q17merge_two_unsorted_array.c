#include<stdio.h>
int main()
{
    int n,m,i;
    int arr1[10],arr2[10],arr3[20];
    printf("Enter the number of Elements in Array1: ");
    scanf("%d",&n);
    printf("Enter the Elements in Array1: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number of Elements in Array2: ");
    scanf("%d",&m);
    printf("Enter the Elements in Array2: \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<n;i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=0;i<n+m;i++)
    {
        arr3[n+i]=arr2[i];
    }

    printf("Merged Array is: ");
    for(i=0;i<m+n;i++)
    {
        printf(" %d",arr3[i]);
    }   
}