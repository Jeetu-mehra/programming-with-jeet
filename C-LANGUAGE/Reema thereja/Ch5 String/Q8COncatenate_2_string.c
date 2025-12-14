#include<stdio.h>
int main()
{
    int i,j;
    char str1[10],str2[10],str[20];
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    for(i=0;str1[i]!=0;i++)
    {
        str[i]=str1[i];
    }
    for(j=0;str2[j]!=0;j++)
    {
        str[i+j]=str2[j];
    }
    str[i+j]='\0';
    printf("THe combined string string is: ");
    //puts(str);
    printf("%s",str);
}