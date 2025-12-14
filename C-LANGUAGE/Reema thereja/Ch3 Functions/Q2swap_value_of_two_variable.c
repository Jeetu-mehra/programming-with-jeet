#include<stdio.h>
void swap(int p, int q);
int main()
{
    int a,b;
    printf("Enter The value of a: ");
    scanf("%d",&a);
    printf("Enter The value of b: ");
    scanf("%d",&b);
    swap(a,b);
}
void swap(int p, int q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
    printf("The value of a: %d",p);
    printf("\nThe value of b: %d",q);
}