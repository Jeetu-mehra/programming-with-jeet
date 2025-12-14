//39) PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.
#include<stdio.h>
#include<math.h>

//Creating a factorial function
long long factorial(int a)
{
    int j,fact=1; //Declaration
    for(j=1;j<=a;j++)
    {
        fact *=j;
    }
    return fact; // Returns factorial
}

int main(){
    int n,i;
    double sum=0; //Declaration

    // Initialization of all variables
    printf("Enter the number to which the series (1/1!+2/2!+3/3!+4/4!,...N) ends:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        long long fact = factorial(i);
        sum += (double)i / fact;
    }

    //Printing the result
    printf("The sum of series upto %d is :%.6lf",n,sum);

    return 0;
}