#include<stdio.h>
int main()
{
    int n,i,j,arr[2][2];
    printf("Enter the values of array: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }    
}