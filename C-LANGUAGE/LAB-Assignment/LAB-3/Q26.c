
//Q26) program to print sum of all odd and even no. between 1 to n.
#include<stdio.h>
int main()
{
    int i,n,evensum=0,oddsum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            evensum = evensum + i;
        }
        else{
            oddsum = oddsum + i;
        }
    }
    printf("the sum of even numbers is: %d \n",evensum);
    printf("the sum of odd numbers is: %d",oddsum);
}