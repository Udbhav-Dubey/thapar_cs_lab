#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>>ans;
        if (n==0){return {newInterval};}
        int i=0;
        while(i<n&&intervals[i][1]<newInterval[0]){
            vector<int>temp={intervals[i][0],intervals[i][1]};
            ans.push_back(temp);
            i++;
        }
        vector<int>t1=newInterval;
        while(i<n&&intervals[i][0]<=t1[1]){
            t1[0]=min(t1[0],intervals[i][0]);
            t1[1]=max(t1[1],intervals[i][1]);
            i++;
        }
        ans.push_back(t1);
        while(i<n){
            vector<int>temp={intervals[i][0],intervals[i][1]};
            ans.push_back(temp);
            i++;
        }
        return ans;
    }
};

int main (){
    Solution sol;
    vector<vector<int>>a={{1,2},{3,5},{6,7},{8,10},{12,16}};
    vector<int>aa={4,8};
    auto v=sol.insert(a,aa);
    for (auto o:v ){
        cout << o[0] <<" " << o[1] << "\n"; 
    }
    return 0;
}
