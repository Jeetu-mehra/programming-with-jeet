//3) program to calculate the gross salary
#include<stdio.h>
int main()
{
    int basic_salary, HRA, Other_allowance;
    printf("Enter the basic sallary: ");
    scanf("%d",&basic_salary);
    printf("HRA: ");
    scanf("%d",&HRA);
    printf("Enter other_allowance: ");
    scanf("%d",&Other_allowance);

    printf("Gross salary is: ");
    printf("%d", basic_salary + HRA + Other_allowance);
    return 0;
}
