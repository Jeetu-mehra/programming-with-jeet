//93) WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING
#include<stdio.h>
#include<string.h>
int main()
{
   char s1[400];
   char* ptr = s1;
   int w = 1;
   printf("enter the string:");
   gets(s1);
   for(int i = 0; i < strlen(s1); i++)
   {
       if(*(ptr + i) == ' ')
       {
           w++;
       }
   }
   
   printf("words = %d", w);
   return 0;
}
