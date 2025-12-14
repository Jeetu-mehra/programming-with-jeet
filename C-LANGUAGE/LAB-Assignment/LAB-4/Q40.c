//40) READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ.
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the numbers: ");
    while(n>=0){
        scanf("%d",&n);
        if(n>=0){
        sum = sum + n;
        }
        else{
            break;
        }
    }
    printf("The sum all the positive digits is %d",sum);
}