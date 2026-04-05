#include<bits/stdc++.h>
using namespace std;

struct process{
    int pid,bt,at,pr,rt,ct,wt,tat;
};

void priority_non_preemptive(){
    int n;
    cout<<"enter number of processes:\n";
    cin>>n;

    process p[100];
    for(int i=0;i<n;i++){
        p[i].pid=i+1;
        cout<<"enter arrival time, burst time, priority:\n";
        cin>>p[i].at>>p[i].bt>>p[i].pr;
        p[i].rt=p[i].bt;
    }

    int completed=0,time=0;
    bool vis[100]={0};

    while(completed<n){
        int idx=-1,minp=1e9;

        for(int i=0;i<n;i++){
            if(p[i].at<=time && !vis[i]){
                if(p[i].pr<minp){
                    minp=p[i].pr;
                    idx=i;
                }
            }
        }

        if(idx==-1){
            time++;
            continue;
        }

        time+=p[idx].bt;
        p[idx].ct=time;
        p[idx].tat=p[idx].ct-p[idx].at;
        p[idx].wt=p[idx].tat-p[idx].bt;

        vis[idx]=1;
        completed++;
    }

    cout<<"pid ct tat wt\n";
    for(int i=0;i<n;i++){
        cout<<p[i].pid<<" "<<p[i].ct<<" "<<p[i].tat<<" "<<p[i].wt<<"\n";
    }
}

void priority_preemptive(){
    int n;
    cout<<"enter number of processes:\n";
    cin>>n;

    process p[100];
    for(int i=0;i<n;i++){
        p[i].pid=i+1;
        cout<<"enter arrival time, burst time, priority:\n";
        cin>>p[i].at>>p[i].bt>>p[i].pr;
        p[i].rt=p[i].bt;
    }

    int completed=0,time=0;

    while(completed<n){
        int idx=-1,minp=1e9;

        for(int i=0;i<n;i++){
            if(p[i].at<=time && p[i].rt>0){
                if(p[i].pr<minp){
                    minp=p[i].pr;
                    idx=i;
                }
            }
        }

        if(idx==-1){
            time++;
            continue;
        }

        p[idx].rt--;
        time++;

        if(p[idx].rt==0){
            p[idx].ct=time;
            p[idx].tat=p[idx].ct-p[idx].at;
            p[idx].wt=p[idx].tat-p[idx].bt;
            completed++;
        }
    }

    cout<<"pid ct tat wt\n";
    for(int i=0;i<n;i++){
        cout<<p[i].pid<<" "<<p[i].ct<<" "<<p[i].tat<<" "<<p[i].wt<<"\n";
    }
}

void round_robin(){
    int n,tq;
    cout<<"enter number of processes:\n";
    cin>>n;

    process p[100];
    for(int i=0;i<n;i++){
        p[i].pid=i+1;
        cout<<"enter arrival time, burst time:\n";
        cin>>p[i].at>>p[i].bt;
        p[i].rt=p[i].bt;
    }

    cout<<"enter time quantum:\n";
    cin>>tq;

    queue<int>q;
    int time=0,completed=0;
    bool inq[100]={0};

    while(completed<n){
        for(int i=0;i<n;i++){
            if(p[i].at<=time && !inq[i] && p[i].rt>0){
                q.push(i);
                inq[i]=1;
            }
        }

        if(q.empty()){
            time++;
            continue;
        }

        int idx=q.front();
        q.pop();

        int exec=min(tq,p[idx].rt);
        p[idx].rt-=exec;
        time+=exec;

        for(int i=0;i<n;i++){
            if(p[i].at<=time && !inq[i] && p[i].rt>0){
                q.push(i);
                inq[i]=1;
            }
        }

        if(p[idx].rt>0){
            q.push(idx);
        }
        else{
            p[idx].ct=time;
            p[idx].tat=p[idx].ct-p[idx].at;
            p[idx].wt=p[idx].tat-p[idx].bt;
            completed++;
        }
    }

    cout<<"pid ct tat wt\n";
    for(int i=0;i<n;i++){
        cout<<p[i].pid<<" "<<p[i].ct<<" "<<p[i].tat<<" "<<p[i].wt<<"\n";
    }
}

int main(){
    int ch;

    while(1){
        cout<<"\n1.priority non preemptive\n2.priority preemptive\n3.round robin\n4.exit\n";
        cin>>ch;

        if(ch==1) priority_non_preemptive();
        else if(ch==2) priority_preemptive();
        else if(ch==3) round_robin();
        else break;
    }

    return 0;
}
