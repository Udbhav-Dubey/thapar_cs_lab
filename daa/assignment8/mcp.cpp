#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    const int INF=1e9;
    int mcm(vector<int>& a){
        int n=a.size()-1;
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for (int len=2;len<=n;len++){
            for (int i=1;i<=n-len+1;i++){
                int j=i+len-1;
                dp[i][j]=INF;
                for (int k=i;k<=j-1;k++){
                    int cost=dp[i][k]+dp[k+1][j]+a[i-1]*a[k]*a[j];
                    if (cost<dp[i][j]){
                        dp[i][j]=cost;
                    }
                }
            }
        }
        cout <<"dp table->\n";
   for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "answer\n";
        return dp[1][n];
    }
};
int main(){
    Solution sol;
    vector<vector<int>>arr{
        {1,2,3,4},
        {10,20,30},
        {40,20,30,10,30}
    };
    
        cout<<sol.mcm(arr[2])<<"\n";
    return 0;
}
