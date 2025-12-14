//65) Program to read 3*3 matrix and print its transpose.
#include<stdio.h>
int main()
{
    int i,j,arr[3][3];
    printf("Enter the elements in Matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Given matrixis: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d \t",arr[j][i]);
        }
        printf("\n");
    }


}