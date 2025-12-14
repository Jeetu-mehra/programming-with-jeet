//16) program to read three  no. and print max.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three no.");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if (a>c){
            printf("max no. is %d",a);
        }
        else {
            printf("max no. is %d",c);
        }
    }
    else {
        if (b>c){
            printf("Max no. is %d", b);
        }
        else {
            printf("Max no. is %d", c);
        }
    }
}

