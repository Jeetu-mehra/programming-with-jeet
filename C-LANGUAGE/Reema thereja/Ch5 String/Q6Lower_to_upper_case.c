#include<stdio.h>
int main()
{
    int i,j=0;
    char str[20],str1[20];
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str1[j]=str[i]-32;
            j++;

        }
    }
    puts(str1);
}


