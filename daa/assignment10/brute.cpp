#include <bits/stdc++.h>
using namespace std;
vector<int>pattern(string&pat,string&text){
    int n=text.size();
    int m=pat.size();
vector<int>result;
    for (int i=0;i<=n-m;i++){
        int j=0;
        for (j=0;j<m;j++){
            if (text[i+j]!=pat[j]){break;}
        }
            if (j==m){result.push_back(i);}
    }
return result;
}
int main (){
    string pat="bh";
    string text="udbhavbh";
    cout << "for text : " << text << " and pattern " << pat <<"\n";
    vector<int>ans=pattern(pat,text);
    for (auto i:ans){
        cout << i << " ";
    }
    cout << "\n";
}
