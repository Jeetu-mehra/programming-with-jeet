#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c,num;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int f[n+2];
	f[0]=0;
	f[1]=1;
	for(i=2;i<n+2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		f[i]=c;
	}
	for(i=0;i<n+2;i++)
	{
		printf("%d,",f[i]);
	}	
	printf("Enter number do you want to check in series: ");
	scanf("%d",&num);
	for(i=0;i<n+2;i++)
	{
		if(num==f[i]){
			printf("The given no. is present in Fibonacci series: ");
			break;
		}
		if(i==n+1){
			printf("The given no. is not present in Fibonacci series: ");
		}
	}	
}


