//15) program to read marks of five subject and print division.
#include<stdio.h>
int main()
{
    int a,b,c,d,e,t;
    printf("Enter your marks of five subjects");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("%d",t=(a+b+c+d+e)/5);
    if (t>=75 && t<=100){
        printf("first div.");
    }
    else if(t>=60 && t<75){
        printf("scond div.");
    }
    else if(t>=33 && t<60){
        printf("third div.");
    }
    else printf("invalid data");
    return 0;
}
