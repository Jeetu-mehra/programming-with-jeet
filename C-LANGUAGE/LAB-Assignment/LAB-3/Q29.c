//29. PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.
#include <stdio.h>
int main()
{
    int n,i,a,sum=0,k;
    printf("Enter the Number : ");
    scanf("%d",&n);
      k=n;
    for(i=1;n!=0;i++)
    {
      a=n%10;
      sum=sum*10+a;
      n=n/10;
    }

    if(sum==k)
    {
      printf("%d is a Palindrom",k);
    }
    else
    {
        printf("%d is not Palindrom",k);
    }
  
    return 0;
}