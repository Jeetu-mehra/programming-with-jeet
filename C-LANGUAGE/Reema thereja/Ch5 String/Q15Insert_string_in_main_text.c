//not completed!!

#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,len1,len2;
    char str1[20],str2[10],str3[30];
    printf("Enter String: ");
    gets(str1);
    printf("String you want to insert: ");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    printf("at which location: ");
    scanf("%d",&n);
    for(i=0;i<len1+len2;i++)
    {
        if(i<n)
        {
            str3[i]=str1[i];
        }
        if(i>=n && i<n+len2)
        {
            str3[i]=str2[i-n];
        }
        if(i>n+len2)
        {
            str3[i]=str1[len1-n];
        }          
    }
    puts(str3);
}