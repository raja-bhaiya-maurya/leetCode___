
#include<unordered_set>
#include<algorithm>
class Solution {
public:

         void solve(vector<vector<int>>& ans,vector<int>& nums,int size,int idx){
                if(idx==size){
                    if(!count(ans.begin(), ans.end(), nums))
                    ans.push_back(nums);
                    return;
                }

                for(int j= idx;j<size;j++){

                    // if(j>0 && (nums[j-1]==nums[j])) continue;
                    swap(nums[idx],nums[j]);
                    solve(ans,nums,size,idx+1);
                    swap(nums[idx],nums[j]);


                }
                

         }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;

        solve(ans,nums,nums.size(),0);
        return ans;
    }
};