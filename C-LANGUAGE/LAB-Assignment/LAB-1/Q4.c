//4) program to convert temp from fahrenheit to centigrade degrees.
#include<stdio.h>
int main()
{
    float f;
    printf("Enter temp in Fahrenheit: ");
    scanf("%f", &f);
    printf("Temprature in C is: ");
    printf("%f",(f-32)*5/9);
    return 0;
}