//30) program to reverse of a given no.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any number: ");
    scanf("%d",&n);
    while(n!=0){
        i = n % 10;
        n = n/10;
        printf("%d", i);

    }
    return 0;
}