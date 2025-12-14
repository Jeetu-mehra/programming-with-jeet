#include<stdio.h>
int main()
{
    int i;
    char str[20];
    printf("Enter the string: ");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32; 
        }
    }
//  puts(str);
    printf("%s",str);
}