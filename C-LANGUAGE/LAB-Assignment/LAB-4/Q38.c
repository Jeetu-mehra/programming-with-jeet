//38) program to print 1,4,9,16,25.....N
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d, ",i*i);
    }
}