//89)WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n],b[n];
    int *ptr;
    ptr=&a;
    printf("enter the elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[n-1-i]=*(ptr+i);
    }
    printf("\n reverse order of elements:");
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}
