//18) program to raed three no. and print max using conditional operator(?:).
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    (a>b)? ((a>c)?printf("%d",a):printf("%d",c)):((b>c)?printf("%d",b):printf("%d",c));
    return 0;
}



