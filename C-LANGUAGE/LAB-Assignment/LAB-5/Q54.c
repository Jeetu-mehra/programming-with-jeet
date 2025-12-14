//54)program to read an array of 10 integers and print sum of numbers.
#include<stdio.h>
int main(){
    int i, integers[10],sum;
    printf("Enter any 10 integers: ");
    for(i=0;i<10;i++){
        scanf("%d",&integers[i]);
    }
    printf("The given integers is: ");
    for(i=0;i<10;i++){
        printf("%d\t",integers[i]);
    }
    sum=0;
    for(i=0;i<10;i++){
        sum=sum+integers[i];
    }
    printf("\n The Total sum of integers is %d",sum);   
    return 0;     
}