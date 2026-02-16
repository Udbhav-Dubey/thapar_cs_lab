#include <bits/stdc++.h>
using namespace std;
double solve(vector<int>&w,vector<int>&profit,int capacity){
    int n=w.size();
    vector<pair<double,int>>ratio(n);
    for (int i=0;i<n;i++){
        double r=(double)profit[i]/w[i];
        ratio[i]={r,i};
    }
    sort(ratio.begin(),ratio.end(),[](pair<double,int>&a,pair<double,int>&b){return a.first>b.first;});
    double max_profit=0.0;
    for (int i=0;i<n;i++){
        int j=ratio[i].second;
        if (capacity>=w[j]){
            capacity-=w[j];
            max_profit+=profit[j];
        }
        else {
            max_profit+=(double)profit[j]*capacity/w[j];
            break;
        }
    }
    for (auto r:ratio){
        cout << r.first << "  " << r.second << "\n";
    }
    return max_profit;
}
int main (){
    vector<int>w={18,15,10};
    vector<int>profit={25,24,15};
    std::cout << "max profit : " << solve(w,profit,20) << "\n";
    return 0;
}
