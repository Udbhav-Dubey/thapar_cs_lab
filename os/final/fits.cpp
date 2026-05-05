#include<bits/stdc++.h>
using namespace std;
void firstfit(vector<int>&pro,vector<int>&blocks){
    cout << "first fit : \n";
    for (int i=0;i<pro.size();i++){
        bool found=true;
        for (int j=0;j<blocks.size();j++){
            if (blocks[j]>=pro[i]){
                found=true;
                cout << "process " << pro[i] << " in slot " << blocks[j] << "\n";
                blocks[j]-=pro[i];
                break;
            }
        }
        if (!found){cout << "process didnt find a block \n";}
    }
}
void bestfit(vector<int>&pro,vector<int>&blocks){
    cout << "best fit : ";
    for (int i=0;i<pro.size();i++){
        int idx=-1;
        for (int j=0;j<blocks.size();j++){
            if (blocks[j]>=pro[i]){
                if (idx==-1||blocks[j]<blocks[idx]){
                    idx=j;
                }
            }
        }
        if(idx!=-1){cout << "process " << pro[i] << "in slot "<<blocks[idx]<<"\n";blocks[idx]-=pro[i];}
        else {
            cout << "process didnt find a block\n";
        }
    }
}
void worstfit(vector<int>&pro,vector<int>&blocks){
    cout <<"worst fit ";
    for (int i=0;i<pro.size();i++){
        int idx=-1;
        for (int j=0;j<blocks.size();j++){
            if (blocks[j]>=pro[i]){
            if(idx==-1||blocks[j]>blocks[idx]){
                idx=j;
            }
            }
        }
        if (idx!=-1){cout << "process " << pro[i] << "in slot " << blocks[idx]<<"\n";
            blocks[idx]-=pro[i];
        }
        else {
            cout << "process didnt find a block\n";
        }
    }
}
int main (){
    int n,m;
    cin>>n>>m;
    vector<int>pro(n);
    vector<int>blocks(m);
    cout << "enter process size : " << "\n";
    for (int i=0;i<n;i++){
        cin>>pro[i];
    }
    cout <<"enter blocks size : "<<"\n";
    for (int i=0;i<n;i++){
        cin>>blocks[i];
    }
    firstfit(pro,blocks);
    bestfit(pro,blocks);
    worstfit(pro,blocks);
    return 0;
}
