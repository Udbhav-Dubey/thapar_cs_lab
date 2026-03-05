#include <bits/stdc++.h>
using namespace std;

int jobsequencing(vector<int>&d,vector<int>&p){
    int n=d.size()-1;
    vector<int>J(n+1);
    J[0]=0;
    d[0]=0;
    J[1]=1;
    int k=1;
    for(int i=2;i<=n;i++){
        int r=k;
        while(d[J[r]]>d[i]&&d[J[r]]!=r){
            r=r-1;
        }
        if(d[J[r]]<=d[i]&&d[i]>r){
            for(int q=k;q>=r+1;q--){
                J[q+1]=J[q];
            }
            J[r+1]=i;
            k=k+1;
        }
    }
    cout<<"jobs in sequence :\n";
    for(int i=1;i<=k;i++){
        cout<<J[i]<<" ";
    }
    cout<<"\n";
    return k;
}

int main(){
    vector<int>d={0,3,1,2,1};
    vector<int>p={0,100,10,15,27};
    vector<pair<int,int>>arr;
    for(int i=1;i<d.size();i++){
        arr.push_back({p[i],i});
    }
    sort(arr.begin(),arr.end(),[](auto&a,auto&b){return a.first>b.first;});
    vector<int>nd(d.size()),np(p.size());
    for(int i=0;i<arr.size();i++){
        np[i+1]=arr[i].first;
        nd[i+1]=d[arr[i].second];
    }
    cout<<jobsequencing(nd,np)<<"\n";
}
