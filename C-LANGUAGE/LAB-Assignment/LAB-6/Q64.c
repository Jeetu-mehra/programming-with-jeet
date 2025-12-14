//64) Program to read 3*3 matrix and print sum of all rows.
#include<stdio.h>
int main()
{
    int i,j,arr[3][3],sum=0;
    printf("Enter the elements in Matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The given matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d \t",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("\n");
    }

    printf("The sum of rows is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d \t",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("=   %d",sum);
        sum=0;
        printf("\n");
    }
}