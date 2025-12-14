
//25) program to print table of any no.
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter any no.: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d \n",n*i);
    }
    return 0;
}