//36) program to print 1,3,5,7,9.....N
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d, ",i);
        } 
    }
}