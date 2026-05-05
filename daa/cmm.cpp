#include <bits/stdc++.h>
using namespace std;
const int inf=1e9;
int cmm(vector<int>&a){
    int n=a.size();
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    vector<vector<int>>r(n+1,vector<int>(n+1,-1));
    for (int len=2;len<=n;len++){
        for (int i=1;i<n-len+1;i++){
            int j=len+i-1;
            dp[i][j]=inf;
            for (int k=i;k<j;k++){
                int temp=dp[i][j];
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+a[i-1]*a[k]*a[j]);
                if (dp[i][j]!=temp){
                    r[i][j]=k;
                }
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
    return dp[1][n-1];
}
int main (){
    vector<int>a={10,20,30,40};
    cout << cmm(a)<<"\n";
    return 0;
}
