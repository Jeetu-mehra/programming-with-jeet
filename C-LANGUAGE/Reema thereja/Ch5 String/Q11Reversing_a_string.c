#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char str[20],strrev[20];
    printf("Enter the string: ");
    gets(str);
    len=strlen(str);
   
    for(i=0;i<len;i++)
    {
        strrev[i]=str[len-i-1];
    }
    strrev[i]='\0';
    puts(strrev);
    //printf("The reversed string is: %s",strrev);
}
