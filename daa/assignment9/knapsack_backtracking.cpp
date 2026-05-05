#include <bits/stdc++.h>
using namespace std;
class Knapsack{
    private:
        struct Item{
            int w;
            int p;
            double r;
        };
    int n,W;
    vector<Item>items;
    int maxProfit=0;
    static bool cmp(const Item&a,const Item&b){
        return a.r>b.r;
    }
    double bound(int k,int currWeight,int currProfit)const{
        if (currWeight>=W){return 0;}
        double profitbound=currProfit;
        int totalWeight=currWeight;
        for (int i=k;i<n;i++){
            if (totalWeight+items[i].w<=W){
                totalWeight+=items[i].w;
                profitbound+=items[i].p;
            }
            else {
                profitbound+=(W-totalWeight)*items[i].r;
                break;
            }
        }
        return profitbound;
    }
    void solve(int k,int currWeight,int currProfit){
        if (k==n){return ;}
        if (currWeight+items[k].w<=W){
            maxProfit=max(maxProfit,currProfit);
            solve(k+1,currWeight+items[k].w,currProfit+items[k].p);
        }
        if (bound(k+1,currWeight,currProfit)>maxProfit){
            solve(k+1,currWeight,currProfit);
        }
    }
    public:
    Knapsack(int c,vector<pair<int,int>>input):W(c){
        n=input.size();
        items.resize(n);
        for (int i=0;i<n;i++){
            items[i].w=input[i].first;
            items[i].p=input[i].second;
            items[i].r=(double)items[i].p/items[i].w;
        }
        sort(items.begin(),items.end(),cmp);
    }
    int run(){
        solve(0,0,0);
        return maxProfit;
    }
};
int main() {
    vector<pair<int,int>> items = {
        {2, 40},
        {5, 30},
        {10, 50},
        {5, 10}
    };
    cout << "for items : \n";
    for (auto p:items){
        cout << p.first << " " << p.second << "\n";
    }
    cout << "capacity :" << 16 << "\n";
    Knapsack ks(16, items);
    cout << "Max Profit: " << ks.run() << endl;
}
