#include <bits/stdc++.h>
using namespace std;
vector<int>search(string&pat,string&txt){
int d=256;
int q=101;
int m=pat.size();
int n=txt.size();
int h=1;
int p=0,t=0;
for (int i=0;i<m-1;i++){
    h=(h*d)%q;
}
for (int i=0;i<m;i++){
    p=(p*d+pat[i])%q;
    t=(t*d+txt[i])%q;
}
vector<int>res;
for (int i=0;i<=n-m;i++){
    if (p==t){
        bool match=true;
        for (int j=0;j<m;j++){
            if (txt[i+j]!=pat[j]){
                match=false;
                break;
            }
        }
            if (match){res.push_back(i);}
    }
    if (i<n-m){
        t=(d*(t-txt[i]*h)+txt[i+m])%q;
        if (t<0){
            t+=q;
        }
    }
}
return res;
}
int main(){
    string txt = "geeksforgeeks";
    string pat = "geeks";
    cout << "for text : " << txt << " and pattern " << pat <<"\n";
    vector<int> res = search(pat, txt);
    for (auto it : res)
    {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}
