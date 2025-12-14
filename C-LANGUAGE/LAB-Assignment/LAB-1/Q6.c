//6) program to swap two variables without using third variable.
#include<stdio.h>
int main() 
{
    int a, b;

    // Input values for a and b
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a ^ b; // a now becomes a ^ b
    b = a ^ b; // b now becomes original a
    a = a ^ b; // a now becomes original b

    printf("After swapping: a = %d, b = %d\n", a, b);

}
