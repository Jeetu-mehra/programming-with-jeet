//86) WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT LENGTH OF STRING.
#include<stdio.h>
#include<string.h>
char len();
void main()
{
    len();
}


char len()
{
    int length;
    char a[100];
    printf("enter text");
    gets(a);
    length= strlen(a);
    printf("length of string=%d",length);
}