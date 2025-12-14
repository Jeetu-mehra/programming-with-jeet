//22) program to calculate factorial of a no.
#include<stdio.h>
int main() {
    int num, i;
    unsigned  long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

        for (i = 1; i <= num; ++i) {
            factorial *= i; 
        }
        printf("Factorial of %d = %lu\n", num, factorial);
    return 0;
}



