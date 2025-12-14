//33. PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.
#include <stdio.h>
int main() {
    int n, i, num, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("The number of elements must be greater than 0.\n");
        return 1;
    }
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num; 
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    printf("The maximum number is: %d\n", max);
    printf("The minimum number is: %d\n", min);
    return 0;
}