//17) program to raed three no. and print max using logical operator(&&).
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three no.");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c){
        printf("the max no. is: %d",a);
    }
    if (b>a && b>c){
        printf("the max no. is: %d",b);
    }
    if (c>b && c>a){
        printf("the max no. is: %d",c);
    }   
}



