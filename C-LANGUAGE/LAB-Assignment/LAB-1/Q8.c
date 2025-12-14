//8) earth takes a period of revolution of 31558150 seconds. write a program to convert this into no. of days, hours and minutes.
#include<stdio.h>
int main()
{
    int s,ts=31558150,m,tm,th;
    s=ts%60;
    tm=ts/60;
    th=tm/60;
    m=th%60;
    printf("%d:%d:%d",th,m,s);
    return 0;   
}