//it will generate same random no.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,randno;
    printf("The no. of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]=rand();
    }
    printf("Random elements in Array are: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}



//it will generate diffrent random no.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,i,randno;
    srand(time(NULL));
    printf("The no. of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]=rand();
    }
    printf("Random elements in Array are: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}