#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](vector<int>&x,vector<int>&y){
            if (x[1]==y[1]){return x[0]<y[0];}
            else return x[1]<y[1];
                });
        int count=0;
        for (int i=0;i<n-1;i++){
            int temp=intervals[i][1];
            while(i<n-1&&temp>intervals[i+1][0]){
                count++;
                i++;
            }
        }
        return count;
    }
};

