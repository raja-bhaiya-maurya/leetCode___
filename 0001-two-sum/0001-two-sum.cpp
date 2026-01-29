class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>k;
      int l=nums.size(),i,t;
      for(i=0;i<l;i++){
        t=target-nums[i];
        if(k.count(t)){
           return {k[t],i};
        }
        k[nums[i]]=i;
      }
       return {};
    } 
    
};