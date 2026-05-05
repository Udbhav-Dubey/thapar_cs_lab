#include <bits/stdc++.h>
using namespace std;
struct process{
    int wt;
    int bt;
    int at;
    int tat;
    int ct;
    int id;
};
int main (){
cout << "enter the number of processes\n";
int n;
cin>>n;
    cout << "enter process at and bt in order\n";
    vector<process>pro(n);
for (int i=0;i<n;i++){
    pro[i].id=i+1;
    cout << "for process " << i+1 << ": at : " ;
    cin>>pro[i].at ;
    cout << " bt : " ;
    cin >> pro[i].bt;
}
sort(pro.begin(),pro.end(),[](process a,process b){return a.at<b.at;});
int time=0;
for (int i=0;i<n;i++){
    if (time<pro[i].at){time=pro[i].at;}
    time+=pro[i].bt;
    pro[i].ct=time;
    pro[i].tat=time-pro[i].at;
    pro[i].wt=pro[i].tat-pro[i].bt;
}
for (auto &x:pro){
    cout << x.id << " " << x.ct << " " <<x.tat << " "<< x.wt << "\n";
}
return 0;
}
