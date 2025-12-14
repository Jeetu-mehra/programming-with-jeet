#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,len1,len2;
    char str1[20],str2[10];
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            if(str1[i]==str2[i])
            {
                j++;
            }
        }
    }
    if(i==j)
    {
        printf("The given strings are equal");
    }

    for(i=0;i<len1;i++)
    {
        if(str1[i]>str2[i])
        {
            printf("string 1 is greater.");
            break;
        }
        if(str2[i]>str1[i])
        {
            printf("string 2 is greater.");
            break;
        }
    }

}