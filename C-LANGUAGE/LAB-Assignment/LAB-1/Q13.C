//13) program to check whether a no. is even or odd.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a no.: ");
    scanf("%d",&a);
    printf("%d", b=a%2);
    if (b==0) {
        printf("The given no. is even");
    }
    if (b==1){
        printf("The given no. is odd");
    }
    return 0;
} 

