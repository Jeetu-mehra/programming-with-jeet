#include<stdio.h>

struct Process{
    int pid,at,bt,rt,ct,wt,tat,priority;
};

void calculate(struct Process p[],int n)
{
    float avgwt=0,avgtat=0;

    for(int i=0;i<n;i++)
    {
        p[i].tat = p[i].ct - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;

        avgwt += p[i].wt;
        avgtat += p[i].tat;
    }

    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");

    for(int i=0;i<n;i++)
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",
    p[i].pid,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt);

    printf("\nAverage WT = %.2f",avgwt/n);
    printf("\nAverage TAT = %.2f\n",avgtat/n);
}

void FCFS(struct Process p[],int n)
{
    int time=0;

    for(int i=0;i<n;i++)
    {
        if(time < p[i].at)
            time = p[i].at;

        time += p[i].bt;
        p[i].ct = time;
    }

    calculate(p,n);
}

void SJF(struct Process p[],int n)
{
    int completed=0,time=0,min,index;

    int visited[20]={0};

    while(completed<n)
    {
        min=9999;
        index=-1;

        for(int i=0;i<n;i++)
        {
            if(p[i].at<=time && !visited[i] && p[i].bt<min)
            {
                min=p[i].bt;
                index=i;
            }
        }

        if(index!=-1)
        {
            time+=p[index].bt;
            p[index].ct=time;
            visited[index]=1;
            completed++;
        }
        else
        time++;
    }

    calculate(p,n);
}

void SRTF(struct Process p[],int n)
{
    int time=0,completed=0,min,index;

    while(completed<n)
    {
        min=9999;
        index=-1;

        for(int i=0;i<n;i++)
        {
            if(p[i].at<=time && p[i].rt>0 && p[i].rt<min)
            {
                min=p[i].rt;
                index=i;
            }
        }

        if(index!=-1)
        {
            p[index].rt--;
            time++;

            if(p[index].rt==0)
            {
                completed++;
                p[index].ct=time;
            }
        }
        else
        time++;
    }

    calculate(p,n);
}

void PriorityNP(struct Process p[],int n)
{
    int completed=0,time=0,index,min;

    int visited[20]={0};

    while(completed<n)
    {
        min=9999;
        index=-1;

        for(int i=0;i<n;i++)
        {
            if(p[i].at<=time && !visited[i] && p[i].priority<min)
            {
                min=p[i].priority;
                index=i;
            }
        }

        if(index!=-1)
        {
            time+=p[index].bt;
            p[index].ct=time;
            visited[index]=1;
            completed++;
        }
        else
        time++;
    }

    calculate(p,n);
}

void RoundRobin(struct Process p[],int n,int tq)
{
    int time=0,completed=0;

    while(completed<n)
    {
        for(int i=0;i<n;i++)
        {
            if(p[i].rt>0 && p[i].at<=time)
            {
                if(p[i].rt>tq)
                {
                    time+=tq;
                    p[i].rt-=tq;
                }
                else
                {
                    time+=p[i].rt;
                    p[i].rt=0;
                    p[i].ct=time;
                    completed++;
                }
            }
        }
    }

    calculate(p,n);
}

void LJF(struct Process p[],int n)
{
    int completed=0,time=0,max,index;
    int visited[20]={0};

    while(completed<n)
    {
        max=-1;
        index=-1;

        for(int i=0;i<n;i++)
        {
            if(p[i].at<=time && !visited[i] && p[i].bt>max)
            {
                max=p[i].bt;
                index=i;
            }
        }

        if(index!=-1)
        {
            time+=p[index].bt;
            p[index].ct=time;
            visited[index]=1;
            completed++;
        }
        else
        time++;
    }

    calculate(p,n);
}

void LRTF(struct Process p[],int n)
{
    int time=0,completed=0,max,index;

    while(completed<n)
    {
        max=-1;
        index=-1;

        for(int i=0;i<n;i++)
        {
            if(p[i].at<=time && p[i].rt>0 && p[i].rt>max)
            {
                max=p[i].rt;
                index=i;
            }
        }

        if(index!=-1)
        {
            p[index].rt--;
            time++;

            if(p[index].rt==0)
            {
                completed++;
                p[index].ct=time;
            }
        }
        else
        time++;
    }

    calculate(p,n);
}

int main()
{
    int n,choice,tq;

    struct Process p[20];

    printf("Enter number of processes: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter PID AT BT: ");
        scanf("%d%d%d",&p[i].pid,&p[i].at,&p[i].bt);

        p[i].rt=p[i].bt;
    }

    printf("\n1.FCFS\n2.SJF\n3.SRTF\n4.Priority\n5.Round Robin\n6.LJF\n7.LRTF\n");

    printf("Enter choice: ");
    scanf("%d",&choice);

    if(choice==4)
    {
        for(int i=0;i<n;i++)
        {
            printf("Enter priority for P%d: ",p[i].pid);
            scanf("%d",&p[i].priority);
        }
    }

    switch(choice)
    {
        case 1: FCFS(p,n); break;
        case 2: SJF(p,n); break;
        case 3: SRTF(p,n); break;
        case 4: PriorityNP(p,n); break;
        case 5:
            printf("Enter Time Quantum: ");
            scanf("%d",&tq);
            RoundRobin(p,n,tq);
            break;
        case 6: LJF(p,n); break;
        case 7: LRTF(p,n); break;
    }

    return 0;
}