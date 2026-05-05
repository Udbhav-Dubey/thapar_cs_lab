#include <bits/stdc++.h>
using namespace std;
struct Process{
    int wt,at,ct,tat,bt,id;
};
int main (){
    cout << "enter the number of process\n";
    int n;
    cin>>n;
    vector<Process>pro(n);
    vector<bool>vis(n,0);
    for (int i=0;i<n;i++){
        pro[i].id=i+1;
        cout << "enter the at and bt : " ;cin>> pro[i].at >> pro [i].bt ;;

    }
    int completed=0;int time=0;
    while(completed<n){
        int idx=-1,best=INT_MAX;
        for (int i=0;i<n;i++){
            if(!vis[i]&&pro[i].at<=time&&pro[i].bt<best){
                best=pro[i].bt;
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
