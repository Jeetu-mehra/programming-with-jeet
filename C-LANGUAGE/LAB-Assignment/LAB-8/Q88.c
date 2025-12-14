//88) WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.
#include<stdio.h>
int main()
{
    int a[3],b[3];
    int *ptr;
    ptr=&a[0];
    printf("enter the elements:");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements after copied \n");
    for(int i=0;i<3;i++)
    {

        printf("%d \t",*(ptr+i));
    }
}
