
#include<stdio.h>
#include<conio.h>
void main()
{
  int roll[10],sub1[10],sub2[10],sub3[10],total[10],max[4],temp[4];
  for(int i=0;i<10;i++)
  {
    printf("\nEnter roll no.:");
    scanf("%d",&roll[i]);
    printf("\nEnter marks of subject1:");
    scanf("%d",&sub1[i]);
    printf("\nEnter marks of subject2:");
    scanf("%d",&sub2[i]);
    printf("\nEnter marks of subject3:");
    scanf("%d",&sub3[i]);
  }
  printf("\nRoll No.  Subject1  Subject2  Subject3");
  for(int i=0;i<10;i++)
  {
    printf("\n   %d          %d        %d        %d",roll[i],sub1[i],sub2[i],sub3[i]);
    total[i]=sub1[i]+sub2[i]+sub3[i];
  }
  for(int i=0;i<4;i++)
  {
    max[i]=0;
  }
  printf("\nTotal marks obtained by each student are:-\nRoll No.  Total Marks");
  for(int i=0;i<10;i++)
  {
    if(sub1[i]>=max[1])
    {
      max[1]=sub1[i];
      temp[1]=roll[i];
    }
    if(sub2[i]>=max[2])
    {
      max[2]=sub2[i];
      temp[2]=roll[i];
    }
    if(sub3[i]>=max[3])
    {
      max[3]=sub3[i];
      temp[3]=roll[i];
    }
    if(total[i]>=max[0])
    {
      max[0]=total[i];
      temp[0]=roll[i];
    }
    printf("\n   %d          %d",roll[i],total[i]);
  }
  printf("\nHighest marks in each subject is:-\nSubject 1:%d\tRoll No.:%d\nSubject 2:%d\tRoll No.:%d\nSubject 3:%d\tRoll No.:%d",max[1],temp[1],max[2],temp[2],max[3],temp[3]);
  printf("\nHighest total marks:%d\tRoll No.:%d",max[0],temp[0]);
}
