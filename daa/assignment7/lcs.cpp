#include <bits/stdc++.h>
using namespace std;
void  cons(string text1,vector<vector<int>>&ch,int i,int j);
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        vector<vector<int>>ch(n+1,vector<int>(m+1,-1));
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                if (text1[i-1]==text2[j-1]){
                    ch[i][j]=0;
                    dp[i][j]=dp[i-1][j-1]+1;
                }
               /* else {dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    if (dp[i][j]==dp[i-1][j]){
                        ch[i][j]=1;
                    }
                    else {
                        ch[i][j]=2;
                    }
                }*/
                else {
                    if (dp[i-1][j]>=dp[i][j-1]){
                        ch[i][j]=1;
                    }
                    else {
                        ch[i][j]=2;
                    }
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        cons(text1,ch,n,m);
        cout << "\n";
        return dp[n][m];
    }
void  cons(string text1,vector<vector<int>>&ch,int i,int j){
    if (i==0||j==0){
//        cout << "\n";
        return ;
    }
    if (ch[i][j]==0){
        cons(text1,ch,i-1,j-1);
        cout << text1[i-1] << " " ;
    }
    else   if (ch[i][j]==1){
        cons(text1,ch,i-1,j);
    }
    else {cons(text1,ch,i,j-1);}
}
int main (){
    string t1="abcde";
    string t2="ace";
    cout << longestCommonSubsequence(t1,t2)<<"\n";
    return 0;
}
