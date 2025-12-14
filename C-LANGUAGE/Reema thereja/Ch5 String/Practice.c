#include<stdio.h>
int main()
{   
    struct data
    {
        int rollno;
        char name[20];
        float marks;
    };
    struct data std[3];

    int i,n;
    printf("Enter the no. of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter data of student \n");
        scanf("%d",&std[i].rollno);
        scanf("%s",&std[i].name);
        scanf("%f",&std[i].marks);
    }
    printf("The data of students are: \n");
    for(i=0;i<n;i++)
    {
        printf("\n %d",std[i].rollno);
        printf("\n %s",std[i].name);
        printf("\n %f",std[i].marks);
    }
}