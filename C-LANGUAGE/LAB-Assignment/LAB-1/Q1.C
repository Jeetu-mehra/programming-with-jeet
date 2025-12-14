//1) program to calculate the simple interest.
# include <stdio.h>
int main()
{
    int P, R, T;
    printf("Enter the principle: ");
    scanf("%d",&P);
    printf("Enter the rate: ");
    scanf("%d",&R);  
    printf("Enter time: ");
    scanf("%d",&T);

    printf("%d",(P * R * T)/100);
    return 0;
}