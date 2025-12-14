//34)PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)
#include<stdio.h>
int main()
{
    int i,n,x=0,y=1,z;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("%d,%d,",x,y);
    for(i=1;i<=n;i++){
        z =x+y;
        x=y;
        y=z;
        printf("%d,",z);
    }
    return 0;
} 