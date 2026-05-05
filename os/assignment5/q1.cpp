#include<bits/stdc++.h>
using namespace std;
struct process{
    int pid,at,bt,rt,ct,wt,tat;
};
void fcfs(){
    int n;
    cout<<"enter number of processes:\n";
    cin>>n;
    process p[100];
    for(int i=0;i<n;i++){
        p[i].pid=i+1;
        cout<<"enter arrival time and burst time:\n";
        cin>>p[i].at>>p[i].bt;
    }
    sort(p,p+n,[](process a,process b){
        return a.at<b.at;
    });
    int time=0;
    for(int i=0;i<n;i++){
        if(time<p[i].at) time=p[i].at;
        time+=p[i].bt;
        p[i].ct=time;
        p[i].tat=p[i].ct-p[i].at;
        p[i].wt=p[i].tat-p[i].bt;
    }
    cout<<"pid ct tat wt\n";
    for(int i=0;i<n;i++){
        cout<<p[i].pid<<" "<<p[i].ct<<" "<<p[i].tat<<" "<<p[i].wt<<"\n";
    }
}
void sjf_non_preemptive(){
    int n;
    cout<<"enter number of processes:\n";
    cin>>n;

    process p[100];
    bool vis[100]={0};

    for(int i=0;i<n;i++){
        p[i].pid=i+1;
        cout<<"enter arrival time and burst time:\n";
        cin>>p[i].at>>p[i].bt;
    }

    int completed=0,time=0;

    while(completed<n){
        int idx=-1,minbt=1e9;

        for(int i=0;i<n;i++){
            if(p[i].at<=time && !vis[i]){
                if(p[i].bt<minbt){
                    minbt=p[i].bt;
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

void sjf_preemptive(){
    int n;
    cout<<"enter number of processes:\n";
    cin>>n;

    process p[100];

    for(int i=0;i<n;i++){
        p[i].pid=i+1;
        cout<<"enter arrival time and burst time:\n";
        cin>>p[i].at>>p[i].bt;
        p[i].rt=p[i].bt;
    }

    int completed=0,time=0;

    while(completed<n){
        int idx=-1,minrt=1e9;

        for(int i=0;i<n;i++){
            if(p[i].at<=time && p[i].rt>0){
                if(p[i].rt<minrt){
                    minrt=p[i].rt;
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

int main(){
    int ch;

    while(1){
        cout<<"\n1.fcfs\n2.sjf non preemptive\n3.sjf preemptive\n4.exist\n";
        cin>>ch;

        if(ch==1) fcfs();
        else if(ch==2) sjf_non_preemptive();
        else if(ch==3) sjf_preemptive();
        else break;
    }

    return 0;
}
