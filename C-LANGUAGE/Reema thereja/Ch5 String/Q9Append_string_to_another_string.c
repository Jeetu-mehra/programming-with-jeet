#include<stdio.h>
int main()
{
    int i,j;
    char str1[20],str2[10];
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    for(i=0;str1[i]!=0;i++)
    {
        str1[i]=str1[i];
    }
    for(j=0;str2[j]!=0;j++)
    {
        str1[i+j]=str2[j];
    }
    str1[i+j]='\0';
    printf("THe combined string string is: ");
    //puts(str);
    printf("%s",str1);
}