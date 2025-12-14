//9) program to read time in Hr,min,sec and convert into total second.
#include<stdio.h>
int main()
{
    int hr,min,sec;
    printf("Enter hr,min & sec");
    scanf("%d %d %d",&hr,&min,&sec);

    printf("%d",hr*60*60+min*60+sec);
    return 0;
}