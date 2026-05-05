#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Process{
    int id;
    int arrival;
    int burst;
    int completion;
    int waiting ;
    int turnaround;
};
bool cmp(Process a,Process b){
    return a.arrival<b.arrival;
}
int main (){
    int n;
    cout << "number of processes : ";
    cin>>n;
    vector<Process>p(n);
    for (int i=0;i<n;i++){
        p[i].id=i+1;
        cout << "\nProcess " << p[i].id << "\n";
        cout << "Arival time: ";
        cin>> p[i].arrival;
        cout << "Burst time : ";
        cin>>p[i].burst;
    }
    sort(p.begin(),p.begin()+n,cmp);
    int current_time=0;
    cout << "\nExecution order:\n";
    for (int i=0;i<n;i++){
        if (current_time<p[i].arrival){
            cout << "Cpu is idle from " << current_time << "to " << p[i].arrival << "\n";
            current_time=p[i].arrival;
        }
        int start=current_time;
        int end=current_time+p[i].burst;
        cout << "P" << p[i].id << "runs from " << start << " to " << end <<"\n";
        p[i].completion=end;
        p[i].turnaround=end-p[i].arrival;
        p[i].waiting=p[i].turnaround-p[i].burst;
        current_time=end;
    }
    return 0;
}
