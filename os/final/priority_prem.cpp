#include <bits/stdc++.h>
using namespace std;
struct process {
    int at,bt,id,wt,ct,pr,tat,rt;
};
int main (){
    int n;
    cout << "enter the number of process\n";
    cin>>n;
    vector<process>pro(n);
    for (int i=0;i<n;i++){
        pro[i].id=i+1;
        cout << "enter at , bt , pr : ";
        cin>>pro[i].at>>pro[i].bt>>pro[i].pr;
        pro[i].rt=pro[i].bt;
    }
    int completed=0;
    int time=0;
    while(completed<n){
        int idx=-1;
        int best=INT_MAX;
        for (int i=0;i<n;i++){
            if (pro[i].at<=time&&pro[i].rt>0&&(pro[i].pr<best||(pro[i].pr==best&&pro[i].at<pro[idx].at))){
                best=pro[i].pr;
                idx=i;
            }
        }
        if (idx==-1){time++;continue;}
        pro[idx].rt--;
        time++;
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
