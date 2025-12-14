#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,n;
    char str[20],strn[20];
    printf("Enter the string: ");
    gets(str);
    len=strlen(str);
    printf("no. of character you want to extract: ");
    scanf("%d",&n);
    if(len>n)
    {
        for(i=0;i<len;i++)
        {
            strn[i]=str[len-n+i];
        }
    }
    strn[i]='\0';
    puts(strn);
}
