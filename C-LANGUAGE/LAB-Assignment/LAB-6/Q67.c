//67) Program to read two 3*3 matrix and subtract their values and store them in third matrix.
#include<stdio.h>
int main()
{
    int i,j,arr1[3][3],arr2[3][3],arr3[3][3];
    printf("Enter the elements of first in Matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of second in Matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The first matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d \t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d \t",arr2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            arr3[i][j]=arr1[i][j]-arr2[i][j];
        }
        printf("\n");
    }
    printf("The subtraction of two matrices is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d \t",arr3[i][j]);
        }
        printf("\n");
    }

}