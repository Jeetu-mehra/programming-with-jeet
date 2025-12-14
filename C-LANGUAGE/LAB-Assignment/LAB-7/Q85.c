//85) WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.
#include<stdio.h>
char check(char a);
void main()
{
    char a;
    printf("enter character");
    scanf("%c",&a);
    check(a);
}



char check(char a)
{
    switch(a)
    {
        case 'a' : printf("character is vowel");
                break;
        case 'e' : printf("character is vowel");
                break;
        case 'i' : printf("character is vowel");
                break;
        case 'o' : printf("character is vowel");
                break;
        case 'u' : printf("character is vowel");
                break;
        case 'A' : printf("character is vowel");
                break;
        case 'E' : printf("character is vowel");
                break;
        case 'I' : printf("character is vowel");
                break;
        case 'O' : printf("character is vowel");
                break;
        case 'U' : printf("character is vowel");
                break;
        default : printf("charcter is not a vowel");
    }
}