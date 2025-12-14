//63) Program to read 3*3 matrix and findout max and min elements.
#include<stdio.h>
int main()
{
    int i,j,arr[3][3],max,min;
    printf("Enter the elements in Matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    max=arr[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            if (arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    min=arr[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            if (arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    printf("The max no. is: %d",max);
    printf("\n The min no. is: %d",min);
}