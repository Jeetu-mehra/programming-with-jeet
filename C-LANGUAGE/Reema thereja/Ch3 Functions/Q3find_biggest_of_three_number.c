#include<stdio.h>
void large(int p, int q, int r);
int main()
{
    int a,b,c;
    printf("Enter The value of a: ");
    scanf("%d",&a);
    printf("Enter The value of b: ");
    scanf("%d",&b);
    printf("Enter The value of c: ");
    scanf("%d",&c);
    large(a,b,c);
}

void large(int p, int q, int r)
{
    if(p>q && p>r)
    {
        printf("%d is the greatest.",p);
    }
    else if(q>p && q>r)
    {
        printf("%d is the greatest.",q);
    }
    else
    {
        printf("%d is the greatest.",r);
    }
}