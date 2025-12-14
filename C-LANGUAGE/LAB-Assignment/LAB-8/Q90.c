//90) WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS.
#include<stdio.h>
#include<string.h>
int main()
{
   char s1[30];
   int l=0,d=0;
   char *ptr;
   ptr=s1[0];
   printf("enter the string:");
   gets(s1);
 
   printf("\n length of string including spaces:");
   for(ptr=s1;*ptr!='\0';ptr++)
   {
       l++;
       if(*ptr==' ')
       {
           d++;
       }
   }
   printf("%d",l);
   printf("\n length of string excluding spaces:=%d",l-d);
}




#include<stdio.h>
#include<string.h>
int main()
{
   char s1[30];
   int l=0,d=0;
   char *ptr;
   ptr=s1;
   printf("enter the string:");
   gets(s1);
 
   printf("\n length of string including spaces:");
   for(int i=0;i<strlen(s1);i++)
   {
       l++;
       if(*(ptr + i) ==' ')
       {
           d++;
       }
   }
   printf("%d",l);
   printf("\n length of string excluding spaces:=%d",l-d);
}
