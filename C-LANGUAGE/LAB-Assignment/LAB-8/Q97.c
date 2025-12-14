//97) WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER
#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    int l=0;
    printf("enter the string:");
    gets(str);
    char *ptr;
    ptr=str;
    for(int i=0;i<strlen(str);i++)
    {
        if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u' || *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U')
        {
            
            l++;
        }
        ptr++;
    }
    printf("%d",l);
}
