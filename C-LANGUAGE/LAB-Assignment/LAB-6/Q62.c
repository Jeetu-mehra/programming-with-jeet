//62) Program to reverse an array.
#include<stdio.h>
int main()
{
    int i,N,temp;
    printf("Enter The value of N: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the Elements in array: \n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n The reverse of the given elements is: \n");
    for(i=0;i<N/2;i++)
    {
        temp = arr[i];
        arr[i]=arr[N-i-1];
        arr[N-i-1]=temp;
    }
    for(i=0;i<N;i++)
    {
        printf("%d \t",arr[i]);
    }
}
