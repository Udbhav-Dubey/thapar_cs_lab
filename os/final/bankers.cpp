#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>alloc(n,vector<int>(m));
    vector<vector<int>>maxy(n,vector<int>(m));
    vector<vector<int>>need(n,vector<int>(m));
    vector<int>avail(m);
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>alloc[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>maxy[i][j];
        }
    }
    for (int j=0;j<m;j++){
        cin>>avail[j];
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            need[i][j]=maxy[i][j]-alloc[i][j];
        }
    }
    vector<bool>finish(n,false);
    vector<int>safe;
    for (int k=0;k<n;k++){
        bool found=false;
        for (int i=0;i<n;i++){
            if (!finish[i]){
            bool ok=true;
            for (int j=0;j<m;j++){
                if (need[i][j]>avail[j]){
                    ok =false;
                    break;
                }
            }
            if (ok){
                for (int j=0;j<m;j++){
                    avail[j]+=alloc[i][j];
                }
            finish[i]=1;
            safe.push_back(i);
            found=true;
            }
            }
        }
        if (!found)break;
    }
    if (safe.size()==n){cout <<"safe sequence\n";for (int x: safe)cout << "P "<<x<<" ";}
    else {cout << "unsafe\n";}
return 0;
}
