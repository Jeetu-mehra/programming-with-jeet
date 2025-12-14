// 108). WITHOUT USING INBUILT STRING FUNCTIONS, PERFORM THE FOLLOWING IN C LANGUAGE:
// A. COPY ONE STRING INTO ANOTHER
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    printf("enter the string 1:");
    gets(s1);
    printf("enter the string 2:");
    gets(s2);
    
    for(int i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    printf("copied string=%s",s2);
}
