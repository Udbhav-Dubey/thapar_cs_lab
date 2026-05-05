#include <bits/stdc++.h>
using namespace std;
struct process{
    int bt,at,rt,tat,id,ct,wt;
};
int main (){
cout << "enter the number of process\n";
int n;
cin>>n;
vector<process>pro(n);
for (int i=0;i<n;i++){
    pro[i].id=i+1;
    cout << "enter the process at and bt : ";
    cin>>pro[i].at>>pro[i].bt;
    pro[i].rt=pro[i].bt;
}
int time=0,completed=0;
while(completed<n){
    int idx=-1;int best=INT_MAX;
    for(int i=0;i<n;i++){
        if (pro[i].rt>0&&pro[i].at<=time&&pro[i].rt<best){
            best=pro[i].rt;
            idx=i;
        }
    }
    if (idx==-1){time++;continue;}
    time++;
    pro[idx].rt--;
    if (pro[idx].rt==0){
        pro[idx].ct=time;
        pro[idx].tat=pro[idx].ct-pro[idx].at;
        pro[idx].wt=pro[idx].tat-pro[idx].bt;
        completed++;
        
    }
}
 for (auto &x:pro){
    cout << x.id << " " << x.ct << " " <<x.tat << " "<< x.wt << "\n";
}

return 0;
}
