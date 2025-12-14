//76) write a function to check whether a number is even or odd.
#include <stdio.h>
int even_or_odd(x){
    if(x%2==0){
        printf("%d is even",x);
        }
    else{
        printf("%d is odd",x);
    }        
}

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    even_or_odd(n);
}