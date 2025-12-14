// 94).WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING 
// POINTERS.FOR EXAMPLE,
//  ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS”
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40],s2[40];
    printf("enter the string:");
    gets(s1);
    char *ptr1,*ptr2;
    ptr1=s1;
    ptr2=s2;
    for(int i=0;i<strlen(s1);i++)
    {
        *(ptr2+i)=*(ptr1+strlen(s1)-1-i);
    }
    printf("%s",s2);
}
