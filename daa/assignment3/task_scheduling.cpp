#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&start,vector<int>&finish){
    vector<pair<int,int>>tasks;
    for (int i=0;i<start.size();i++){
        tasks.push_back({start[i],finish[i]});
    }
    sort(tasks.begin(),tasks.end());
    cout << "after sorting : \n";
    for (auto p:tasks){
        cout << p.first << " " << p.second << "\n";
    }
    priority_queue<int,vector<int>,greater<int>>pq;
    int m=0;
    for (int i=0;i<tasks.size();i++){
        if (!pq.empty()&&pq.top()<=tasks[i].first){
            pq.pop();
        }
        else {
            m++;
        }
        pq.push(tasks[i].second);
    }
    return m;
}
int main (){
    vector<int>finish={4,9,5,6};
    vector<int>start={1,5,3,4};
    cout << solve(start,finish) << "\n";
}
