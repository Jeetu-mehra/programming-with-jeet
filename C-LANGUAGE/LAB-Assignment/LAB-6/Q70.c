//70) Program to read an array and print the occurance of any particular element in the array.
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
            printf("the given element is present in this array");
            }
        else{
            printf("the given element is not present in this array");
            break;            
        }
    }
}