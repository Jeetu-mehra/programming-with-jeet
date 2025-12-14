#include<stdio.h>
int con(int h, int m);
int main()
{
    int h,m,minutes;
    printf("Enter Hours: ");
    scanf("%d",&h);
    printf("Enter Minutes: ");
    scanf("%d",&m);
    minutes=con(h,m);
    printf("The total minutes are: %d",minutes);

}
int con(int h, int m)
{
    return m=h*60+m;
}