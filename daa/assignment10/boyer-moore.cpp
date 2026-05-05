#include <bits/stdc++.h>
using namespace std;
class Boyer{
vector<int>right;
string pat;
    public:
Boyer(const string&pat):pat{pat}{
    right.resize(256,-1);
    for (int i=0;i<pat.size();i++){
        right[pat[i]]=i;
    }
}
int search(string txt){
    int n=txt.size();
    int m=pat.size();
    int skip{};
    for (int i=0;i<=n-m;i+=skip){
        skip=0;
        for (int j=m-1;j>=0;j--){
            if (pat[j]!=txt[i+j]){
                skip=j-right[txt[i+j]];
                if (skip<1){skip=1;}
                break;
            }
        }
        if (skip==0){return i;}
    }
    return -1;
}
};
int main (){
    string text = "HERE IS A SIMPLE EXAMPLE";
    string pattern = "EXAMPLE";
    cout << "for text : " << text << " and pattern : " << pattern << "\n";
    Boyer bm(pattern);
    int pos = bm.search(text);

    if (pos < text.length())
        cout << "Pattern found at index: " << pos << endl;
    else
        cout << "Pattern not found\n";
    return 0;
}
