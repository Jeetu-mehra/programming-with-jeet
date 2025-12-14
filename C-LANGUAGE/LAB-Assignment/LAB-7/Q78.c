//78) write a function to check whether a number is armstrong or not.
#include <stdio.h>
#include <math.h>
int check_armstrong(int x){
    int i,j,a,b;
    float sum=0;
    b=x;
    for(i=0;x!=0;i++){
        x=x/10;
        }
    x=b;
    for(j=0;x!=0;j++){
        a=x%10;
        x=x/10;
        sum=sum+pow(a,i);
    }
    if(b==sum){
        printf("The given no. is Armstrong");
    }
    else{
        printf("The given no. is not Armstrong");
    }
}

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    check_armstrong(n);
}