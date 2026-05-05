#include <bits/stdc++.h>
using namespace std;
struct process{
    int wt,at,bt,id,tat,ct,pr;
};
int main (){
    cout << "enter the number of process \n";
    int n;
    cin>>n;
    vector<process>pro(n);
    vector<bool>vis(n,false);
    for (int i=0;i<n;i++){
        pro[i].id=i;
        cout << "enter at and bt and priority : ";
        cin>>pro[i].at >> pro[i].bt >> pro[i].pr;
    }
    int completed=0,time=0;
    while(completed<n){
        int idx=-1,best=INT_MAX;
        for (int i=0;i<n;i++){
            if (!vis[i]&&pro[i].at<=time&&(pro[i].pr<best||(pro[i].pr==best&&pro[i].at<pro[idx].at))){
                best=pro[i].pr;
                idx=i;
            }
        }
        if (idx==-1){time++;continue;}
        time+=pro[idx].bt;
        pro[idx].ct=time;
        pro[idx].tat=pro[idx].ct-pro[idx].at;
        pro[idx].wt=pro[idx].tat-pro[idx].bt;
        vis[idx]=1;
        completed++;
    }
 for (auto &x:pro){
    cout << x.id << " " << x.ct << " " <<x.tat << " "<< x.wt << "\n";
}
    return 0;
}
