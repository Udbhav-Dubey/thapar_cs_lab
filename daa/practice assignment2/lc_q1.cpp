#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> um;
            for (int i=0;i<nums.size();i++){
               int j=target-nums[i];
               if(um.find(j)!=um.end()){
                    return {um[j],i};
               }
               um[nums[i]]=i;   
            }   
        return {};
        }   
};
int main (){
    cout << "enter the array\n";
    vector <int> nums;
    int x;
    while(cin>>x){
        nums.push_back(x);
        if (cin.peek()=='\n') break;
    }
    cout << "enter the target\n";
    int target;
    cin >> target;
    cout << "the output of this function is " << endl;
    Solution sol;
    vector<int> result=sol.twoSum(nums,target);
    for (int i : result){
        cout << i << " ";
    }
    cout << endl;
return 0;
}
