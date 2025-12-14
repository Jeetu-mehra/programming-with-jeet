//11) program to read total seconds and read into time
#include<stdio.h>
int main()
{
    int s,ts,m,tm,th;
    printf("Enter seconds: ");
    scanf("%d",&ts);
    s=ts%60;
    tm=ts/60;
    th=tm/60;
    m=tm%60;
    
    printf("%d:%d:%d",th,m,s);
    return 0;   
}

