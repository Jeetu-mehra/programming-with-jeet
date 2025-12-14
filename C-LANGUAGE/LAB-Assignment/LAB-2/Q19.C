//19) program to read a character and check wheather it is small case letter or capital case not using conditional operator.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character");
    scanf("%c",&a);
    if ((int)a>=97 && (int)a<=122){
        printf("The Given character is small case letter");
    }
    if ((int)a>=65 && (int)a<=90){
        printf("the given character is capital letter");
    }
}



