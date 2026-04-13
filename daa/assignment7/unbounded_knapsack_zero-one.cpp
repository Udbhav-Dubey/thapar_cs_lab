#include <bits/stdc++.h>
using namespace std;
int knap(vector<int>&wt,vector<int>&profit,int cap){
    int n=wt.size();
    vector<vector<int>>dp(n+1,vector<int>(cap+1,0));
    for (int i=0;i<=n;i++){
        for (int j=0;j<=cap;j++){
            if (i==0||j==0){dp[i][j]=0;continue;}
            if (wt[i-1]<=j){
                dp[i][j]=max(dp[i-1][j],dp[i][j-wt[i-1]]+profit[i-1]);
            }
            else {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
   cout << "dp table\n";
    for (int i=0;i<=n;i++){
        for (int j=0;j<=cap;j++){
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "answer\n";
  
    return dp[n][cap];

}
int main (){
    vector<int>wt={1,2,5,6,7};
    vector<int>p={1,6,18,22,28};
    int cap=11;
    cout <<knap(wt,p,cap)<<"\n";
return 0;
}
