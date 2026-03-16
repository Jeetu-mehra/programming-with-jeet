#include <bits/stdc++.h>
using namespace std;

/* ================= PROCESS STRUCTURE ================= */
struct Process {
    int pid;
    int arrival;
    int burst;
    int remaining;
    int priority;
    int deadline;

    int start_time = -1;
    int completion = 0;
    int waiting = 0;
    int turnaround = 0;
    int response = 0;
};

/* ================= RANDOM DATA GENERATOR ================= */
void generateProcesses(vector<Process>& p, int n) {
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> arrivalDist(0, 10);
    uniform_int_distribution<> burstDist(1, 10);
    uniform_int_distribution<> priorityDist(1, 5);
    uniform_int_distribution<> deadlineDist(20, 50);

    for(int i=0;i<n;i++){
        p[i].pid = i+1;
        p[i].arrival = arrivalDist(gen);
        p[i].burst = burstDist(gen);
        p[i].remaining = p[i].burst;
        p[i].priority = priorityDist(gen);
        p[i].deadline = deadlineDist(gen);
    }
}

/* ================= PRINT RESULTS ================= */
void printResults(vector<Process> p, string name, ofstream &file){

    double totalWT=0, totalRT=0, totalTAT=0, totalBurst=0;
    int totalTime = 0;

    file << "\n================ " << name << " =================\n";
    file << "PID AT BT WT TAT RT CT\n";

    for(auto &pr : p){
        file << pr.pid<<"   "<<pr.arrival<<"  "<<pr.burst<<"  "
             <<pr.waiting<<"  "<<pr.turnaround<<"  "
             <<pr.response<<"  "<<pr.completion<<"\n";

        totalWT += pr.waiting;
        totalRT += pr.response;
        totalTAT += pr.turnaround;
        totalBurst += pr.burst;
        totalTime = max(totalTime, pr.completion);
    }

    file << "\nAverage Waiting Time: " << totalWT/p.size();
    file << "\nAverage Response Time: " << totalRT/p.size();
    file << "\nAverage Turnaround Time: " << totalTAT/p.size();
    file << "\nCPU Utilization: " << (totalBurst/totalTime)*100 << "%\n";
}

/* ================= FCFS ================= */
vector<Process> FCFS(vector<Process> p){

    sort(p.begin(), p.end(), [](Process a, Process b){
        return a.arrival < b.arrival;
    });

    int current=0;

    for(auto &pr : p){
        if(current < pr.arrival)
            current = pr.arrival;

        pr.start_time = current;
        current += pr.burst;
        pr.completion = current;

        pr.turnaround = pr.completion - pr.arrival;
        pr.waiting = pr.turnaround - pr.burst;
        pr.response = pr.start_time - pr.arrival;
    }

    return p;
}

/* ================= SJF (Non-preemptive) ================= */
vector<Process> SJF(vector<Process> p){

    for(auto &pr:p) pr.arrival=0;

    sort(p.begin(), p.end(), [](Process a, Process b){
        return a.burst < b.burst;
    });

    int current=0;

    for(auto &pr:p){
        pr.start_time = current;
        current += pr.burst;
        pr.completion = current;

        pr.turnaround = pr.completion;
        pr.waiting = pr.turnaround - pr.burst;
        pr.response = pr.waiting;
    }

    return p;
}

/* ================= SRTN (Preemptive SJF) ================= */
vector<Process> SRTN(vector<Process> p){

    int n=p.size(), completed=0, current=0;

    while(completed<n){

        int idx=-1, minRem=INT_MAX;

        for(int i=0;i<n;i++){
            if(p[i].arrival<=current && p[i].remaining>0 &&
               p[i].remaining<minRem){
                minRem=p[i].remaining;
                idx=i;
            }
        }

        if(idx==-1){ current++; continue; }

        if(p[idx].start_time==-1)
            p[idx].start_time=current;

        p[idx].remaining--;
        current++;

        if(p[idx].remaining==0){
            p[idx].completion=current;
            p[idx].turnaround=p[idx].completion-p[idx].arrival;
            p[idx].waiting=p[idx].turnaround-p[idx].burst;
            p[idx].response=p[idx].start_time-p[idx].arrival;
            completed++;
        }
    }

    return p;
}

/* ================= ROUND ROBIN ================= */
vector<Process> RR(vector<Process> p, int quantum){

    queue<int> q;
    int n=p.size(), current=0, completed=0;
    vector<bool> visited(n,false);

    while(completed<n){

        for(int i=0;i<n;i++){
            if(p[i].arrival<=current && !visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }

        if(q.empty()){ current++; continue; }

        int idx=q.front(); q.pop();

        if(p[idx].start_time==-1)
            p[idx].start_time=current;

        int exec=min(quantum,p[idx].remaining);
        p[idx].remaining-=exec;
        current+=exec;

        for(int i=0;i<n;i++){
            if(p[i].arrival<=current && !visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }

        if(p[idx].remaining>0)
            q.push(idx);
        else{
            p[idx].completion=current;
            p[idx].turnaround=p[idx].completion-p[idx].arrival;
            p[idx].waiting=p[idx].turnaround-p[idx].burst;
            p[idx].response=p[idx].start_time-p[idx].arrival;
            completed++;
        }
    }

    return p;
}

/* ================= PRIORITY ================= */
vector<Process> PriorityScheduling(vector<Process> p){

    sort(p.begin(), p.end(), [](Process a, Process b){
        return a.priority < b.priority;
    });

    int current=0;

    for(auto &pr:p){
        pr.start_time=current;
        current+=pr.burst;
        pr.completion=current;

        pr.turnaround=pr.completion;
        pr.waiting=pr.turnaround-pr.burst;
        pr.response=pr.waiting;
    }

    return p;
}

/* ================= MAIN ================= */
int main(){

    int algo,n;
    cout<<"1.FCFS 2.RR 3.SJF 4.SRTN 5.Priority 6.ALL\n";
    cin>>algo;

    cout<<"Number of Processes: ";
    cin>>n;

    vector<Process> processes(n);
    generateProcesses(processes,n);

    ofstream file("output.txt");

    if(algo==1)
        printResults(FCFS(processes),"FCFS",file);

    else if(algo==2)
        printResults(RR(processes,2),"Round Robin (Q=2)",file);

    else if(algo==3)
        printResults(SJF(processes),"SJF",file);

    else if(algo==4)
        printResults(SRTN(processes),"SRTN",file);

    else if(algo==5)
        printResults(PriorityScheduling(processes),"Priority",file);

    else{
        printResults(FCFS(processes),"FCFS",file);
        printResults(SJF(processes),"SJF",file);
        printResults(SRTN(processes),"SRTN",file);
        printResults(RR(processes,2),"Round Robin (Q=2)",file);
        printResults(PriorityScheduling(processes),"Priority",file);
    }

    file.close();
    cout<<"DONE. Check output.txt\n";
}