//77) write a function to check whether a number is palidrome or not.
#include <stdio.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    check_palidrome(n);
}

int check_palidrome(x){
    int i,a,b,sum=0;
    b=x;
    for(i=0;x!=0;i++){
        a=x%10;
        x=x/10;
        sum=sum*10+a;
    }
    if(sum==b){
        printf("The given no. is Palidrome");
    }
    else{
        printf("The given no. is not Palidrome");
    }
    return 0;
}