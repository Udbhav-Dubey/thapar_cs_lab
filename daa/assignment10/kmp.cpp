#include <bits/stdc++.h>
using namespace std;
vector<int>lpss(string &pat){
    int n=pat.size();
    vector<int>res(n);
    res[0]=0;
    int len=0;
    int i=1;
    while(i<n){
        if (pat[i]==pat[len]){
            len++;
            res[i]=len;
            i++;
        }
        else {
            if (len!=0){
                len=res[len-1];
            }
            else {
                res[i]=0;
                i++;
            }
        }
    }
    return res;
}
vector<int>kmp(string &pat,string &txt){
    vector<int>res;
    vector<int>lps=lpss(pat);
    int m=pat.size();
    int n=txt.size();
    int i=0,j=0;
    while(n-m>=i-j){
        if (pat[j]==txt[i]){i++;j++;}
        else if (i<n&&pat[j]!=txt[i]){
            if (j!=0){
                j=lps[j-1];
            }
            else {
                i++;
            }
        }
        if (j==m){res.push_back(i-j);j=lps[j-1];}
    }
    return res;
}
int main (){
    string txt="this is a test text";
    string pat="est";
   vector<int>ans=kmp(pat,txt);
    cout << "for text : " << txt << " and pattern " << pat <<"\n";
   for (auto i:ans){
        cout << i << " ";
   }
   cout << "\n";
   txt="AABAACAADAABAABA";
pat="AABA";
cout << "for text : " << txt << " and pattern " << pat << "\n";
 vector<int>ans1=kmp(pat,txt);
   for (auto i:ans1){
        cout << i << " ";
   }
   cout << "\n";
   return 0;
}
