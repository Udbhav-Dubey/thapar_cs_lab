#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&start,vector<int>&finish){
    int n=start.size();
    vector<pair<int,int>>arr;
    for (int i=0;i<start.size();i++){
        arr.push_back({finish[i],start[i]});
    }
    sort(arr.begin(),arr.end());
    int c=1;
    int end=arr[0].first;
    for (int i=1;i<n;i++){
        if (arr[i].second>end){
            c++;
            end=arr[i].first;
        }
    }
    for (auto p:arr){
        cout << p.second << "  " << p.first << "\n";
    }
    return c;
}
int main (){
    vector<int>start={1,3,0,5,8,5};
    vector<int>finish={2,4,6,7,9,9};
    cout << solve(start,finish) << "\n";
    return 0;
}
