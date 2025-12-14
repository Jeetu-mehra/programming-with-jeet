//35. READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    while(n!=0){
        i = n % 10;
        n = n/10;
        sum = sum + i;
    }
    while(sum>=10){
        int tempsum=0;
        while(sum>0){
        tempsum = tempsum + sum%10;
        sum = sum /10;
        }
        sum = tempsum;
    }
    printf("The sum of all the digits is: %d", sum);
    return 0;
}