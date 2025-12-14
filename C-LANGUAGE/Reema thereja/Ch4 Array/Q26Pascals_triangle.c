#include<stdio.h>
int main()
{
    int n,i,j,arr[7][7];
    printf("The values of array are: \n");
    arr[0][0]=arr[1][5]=arr[1][7]=1   ; 
    for(i=0;i<7;i++)
    {
        // for(j=0;j<7-i-1;j++)
        // {
        //     printf(" ");
        // }
        arr[i][0]=1,arr[i][i]=1;
        for(j=1;j<i;j++)
        {
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}