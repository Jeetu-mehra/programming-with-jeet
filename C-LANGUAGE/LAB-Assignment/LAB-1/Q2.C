//2) Program to read marks of five subject of a student and calculating total and percentage.
# include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter your marks of 5 subjects (out of 100): ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("Total marks of all five subjects: \n");
    printf("%d",a+b+c+d+e);

    printf("  Percentage is: ");
    printf("%d",(a+b+c+d+e)*100/500);
    return 0;

}