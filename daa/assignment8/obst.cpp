#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    const int INF=1e9;
    
    int obst(vector<int>& freq){
        int n=freq.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        
        for (int i=1;i<=n;i++){
            dp[i][i]=freq[i-1];
        }
        
        for (int len=2;len<=n;len++){
            for (int i=1;i<=n-len+1;i++){
                int j=i+len-1;
                dp[i][j]=INF;
                
                int sum=0;
                for (int k=i;k<=j;k++){
                    sum+=freq[k-1];
                }
                
                for (int r=i;r<=j;r++){
                    int left=(r>i)?dp[i][r-1]:0;
                    int right=(r<j)?dp[r+1][j]:0;
                    int cost=left+right+sum;
                    
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
    vector<vector<int>>freqs{
        {34,8,50},
        {10,12},
        {4,2,6,3}
    };
    
        cout<<sol.obst(freqs[2])<<"\n";
    
    return 0;
}
