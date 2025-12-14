//73) An election is contested by 5 candidates. The candidate is numbered are 1 to 5 
// and the voting is done by marking the candidate number on the ballot paper. 
// Write a program to read the ballots and count the votes cast for each candidate 
// using an array variable count. In case, a number, read is outside the range 1 to 5, 
// the ballot should be considered as a ‘spoilt ballot’ and the program should also 
// count the number of spoilt ballots.

#include<stdio.h>
#define n 5
void candidates();
void main()
{
    int size, majority=0, temp =-1;
    candidates();
    printf("Enter the number of voter/Ballot paper :\n");
    scanf("%d", &size);
    int ballot[size], count[6]={0};

    for(int i=0;i<size; i++)
    {
        printf("Enter vote %d\n", i+1);
        scanf("%d", &ballot[i]);

        switch(ballot[i])
        {
            case 1:
            {
                count[0]+=1;
                break;
            }
            case 2:
            {
                count[1]+=1;
                break;
            }
            case 3:
            {
                count[2]+=1;
                break;
            }
            case 4:
            {
                count[3]+=1;
                break;
            }
            case 5:
            {
                count[4]+=1;
                break;
            }
            default : 
            {
                count[5]+=1;
                break;
            }
        }
    }

    for(int i=0;i<=4;i++)
    {
        if(count[i]>majority)
        {
            majority=count[i];
            temp=i;
        }
    }

    printf("the Result : \n");
    for(int i=0;i<n;i++)
    {
        printf("the Votes to Candidate %d : %d\n", i+1, count[i]);
    }
    printf("Number of Spoit Ballot : %d\n", count[5]);
    if(majority>size/2)
    {
    printf("the Candidate %d Wins With Maximum Majority of : %d\n",temp+1,majority);
    }
    else
    {
        printf("There is no Majority\n");
    }

}

void candidates()
{
    printf("For Candidate 1 : press 1\n");
    printf("For Candidate 2 : press 2\n");
    printf("For Candidate 3 : press 3\n");
    printf("For Candidate 4 : press 4\n");
    printf("For Candidate 5 : press 5\n");
}