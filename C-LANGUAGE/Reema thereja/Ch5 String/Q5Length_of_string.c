#include<stdio.h>
int main()
{
    int i,length=0;
    char str[20];
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        length=i+1;
    }
    printf("The length of string is: %d",length);
}