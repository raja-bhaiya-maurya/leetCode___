#include<map>
class Solution {
public:
void solve(vector<vector<int>> &sol, vector<int> &temp,vector<int>& nums, map<vector<int>,int> &a,int size, int i){

    if(i==size){
        if(!a.count(temp)){
          a[temp]=1;
        sol.push_back(temp);
    
        }
       

        return;
    }
    temp.push_back(nums[i]);
    solve(sol,temp,nums,a,size,i+1);
    temp.pop_back();
    solve(sol,temp,nums,a,size,i+1);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> sol;
       map<vector<int>,int> a;
       sort(nums.begin(),nums.end());
        vector<int> temp;
        solve(sol,temp,nums, a ,nums.size(),0);
        return sol;
    }
};