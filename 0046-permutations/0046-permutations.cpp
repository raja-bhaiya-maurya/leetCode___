class Solution {
public:

void solve(vector<int>& nums,vector<vector<int>> &perm,int size,int i){

        if(i==size){
            perm.push_back(nums);
            return;
        }

       for(int j=i;j<nums.size();j++) {swap(nums[i],nums[j]);
        solve(nums,perm,size,i+1);

        swap(nums[i],nums[j]);
       }



    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> perm;int size=nums.size(),i=0;
        solve( nums, perm, size, i);
            return perm;
    }
};