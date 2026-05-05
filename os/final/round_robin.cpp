#include <bits/stdc++.h>
using namespace std;
struct process{
    int id,wt,ct,at,tat,bt,rt;
};
int main (){
    int n;
    cout << "enter the number of process\n";
    cin>>n;
    vector<process>pro(n);
    queue<int>q;
    for (int i=0;i<n;i++){
        cout << "enter at and bt : ";
        pro[i].id=i+1;
        cin>>pro[i].at>>pro[i].bt;
        pro[i].rt=pro[i].bt;
    }
    int tq;
    cout << "enter time quantum\n";
    cin>>tq;
    vector<bool>visited(n,0);
    int completed=0,time=0;
    while(completed<n){
        for (int i=0;i<n;i++){
            if (pro[i].at<=time&&pro[i].rt>0&&!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
        if (q.size()==0){time++;continue;}
        int idx=q.front();
        q.pop();
        int exec=min(tq,pro[idx].rt);
        time+=exec;
        pro[idx].rt-=exec;
        for (int i=0;i<n;i++){
            if (pro[i].at<=time&&pro[i].rt>0&&!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
        if (pro[idx].rt==0){
            pro[idx].ct=time;
            pro[idx].tat=time-pro[idx].at;
            pro[idx].wt=pro[idx].tat-pro[idx].bt;
            completed++;
        }
        else {
            q.push(idx);
        }
    }
      for (auto &x:pro){
    cout << x.id << " " << x.ct << " " <<x.tat << " "<< x.wt << "\n";
}

return 0;
}
