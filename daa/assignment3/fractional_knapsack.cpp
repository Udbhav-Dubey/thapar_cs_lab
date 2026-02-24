#include <bits/stdc++.h>
using namespace std;
double solve(vector<int>&w,vector<int>&profit,int capacity){
    int n=w.size();
    vector<pair<double,int>>ratio(n);
    for (int i=0;i<n;i++){
        double r=(double)profit[i]/w[i];
        ratio[i]={r,i};
    }
    vector<double>ans(profit.size(),0);
    sort(ratio.begin(),ratio.end(),[](pair<double,int>&a,pair<double,int>&b){return a.first>b.first;});
    double max_profit=0.0;
    for (int i=0;i<n;i++){
        int j=ratio[i].second;
        if (capacity>=w[j]){
            capacity-=w[j];
            max_profit+=profit[j];
            ans[j]=1.0;
        }
        else {
            double frac=(double)capacity/w[j];
            max_profit+=profit[j]*frac;
            ans[j]=frac;
            capacity=0;
            break;
        }
    }
    cout << "knapsack :-> \n";
    for (auto a:ans){
        cout << a << "  ";
    }
    cout << "\n";
    for (auto r:ratio){
        cout << r.first << "  " << r.second << "\n";
    }
    return max_profit;
}
int main (){
    vector<int>w={18,15,10};
    vector<int>profit={25,24,15};
    cout << "original -> \n";
    for (int i=0;i<w.size();i++){
        cout << w[i] << "  "<< profit[i] <<"\n";
    }
    std::cout << "max profit : " << solve(w,profit,20) << "\n";
    return 0;
}
