//Q79 write a function to interchange the value of two variable.
#include <stdio.h>
int interchange(a,b){
    int temp;
    temp=a;
    a=b;
    b=temp;    
    printf("Now, x=%d \n y=%d",a,b);
}

int main(){
    int x,y;
    printf("Enter first value: ");
    scanf("%d",&x);
    printf("Enter second value: ");
    scanf("%d",&y);
    interchange(x,y);
}