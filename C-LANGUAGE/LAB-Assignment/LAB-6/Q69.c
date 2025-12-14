//69) Program to perform linear search on an array.
#include<stdio.h>
int main()
{
    int i,N,n;
    printf("Enter The value of N: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the Elements in array: ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n Enter any Element: ");
    scanf("%d",&n);
    for(i=0;i<N;i++)
    {
        if(n==arr[i]){
            printf("the index of %d is %d",n,i+1);
            }
        else{
            printf("the given no. is not available in the array");
            break;
        }
    }
}
