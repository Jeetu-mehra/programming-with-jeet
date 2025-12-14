//14) program to check whether a given character is capital letter, small letter, a digit OR special symbol.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character");
    scanf("%c",&a);
    if ((int)a>=65 && (int)a<=90){
        printf("capital letter");
    }
    else if((int)a>=97 && (int)a<=122){
        printf("small letter");
    }
    else if((int)a>=48 && (int)a<=57){
        printf("Number");
    }
    else printf("special symbol");
    return 0;

}
