//10) Write a C programe to calculate cuttoff marks using the given formula.
#include<stdio.h>
int main()
{
    int cm,m,p,c,e;
    printf("enter the all marks");
    scanf("%d %d %d %d", &m,&p,&c,&e);
    printf("%d",cm=m/2+p/2+c/2+e);
    return 0;

}