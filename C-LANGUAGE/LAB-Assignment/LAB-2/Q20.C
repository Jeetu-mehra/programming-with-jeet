//20) program which will work like simple calculator using switch case.
#include<stdio.h>
int main()
{
    float a, b, s, d, p, q;
    char c;
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    printf("c=\n");
    scanf("%s", &c);
    s = a + b;
    d = a - b;
    p = a * b;
    q = a / b; 
    switch(c){
        case '+': printf("The sum is %f", s);
        break;
        case '-': printf("The diff is %f", d);
        break;
        case '*': printf("The multy is %f", p);
        break;
        case '/': printf("The division is %f", q);
        break;
    } 
    return 0;
}

