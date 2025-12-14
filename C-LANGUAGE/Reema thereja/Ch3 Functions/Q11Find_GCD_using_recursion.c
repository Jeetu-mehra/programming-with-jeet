#include<stdio.h>
int gcd(int num1,int num2);
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("The GCD of (%d,%d) is %d",a,b, gcd(a,b));

}

int gcd(int num1,int num2)
{
    int rem;
    rem = num1%num2;
    if(rem==0)
    {
        return (num2);
    }
    else
    {
        return gcd(num2,rem);
    }
}


//GCD without using function.


// #include<stdio.h>
// int main()
// {
//     int a,b,big,small,i,gcd=1;
//     printf("Enter the value of a: ");
//     scanf("%d",&a);
//     printf("Enter the value of b: ");
//     scanf("%d",&b);
//     if(a>b)
//     {
//         big=a;
//         small=b;
//     }
//     else
//     {
//         big=b;
//         small=a;
//     }
//     for(i=1;i<=small;i++)
//     {
//         if(a%i==0 && b%i==0)
//         {
//             gcd=i;
//         }
//     }
//     printf("the GCD of(%d,%d) is %d",a,b,gcd);
// }