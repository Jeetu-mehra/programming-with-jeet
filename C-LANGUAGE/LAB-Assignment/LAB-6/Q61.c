// 61) PROGRAM TO SORT (bubble SORT) AN ARRAY.
#include<stdio.h>
int main()
{
    int i,j,n[10],temp;
    printf("Enter any 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("The entered numbers are: ");
    for(i=0;i<10;i++)
    {
        printf("%d \t",n[i]);
    }
    for(j=0;j<9;j++){
        for(i=0;i<9;i++){
            if(n[i]>n[i+1])
            {
                temp=n[i];
                n[i]=n[i+1];
                n[i+1]=temp;
            }
        }
    }
    printf("\n The sorted series is: ");
    for(i=0;i<10;i++)
    {
        printf("%d \t",n[i]);
    }
}