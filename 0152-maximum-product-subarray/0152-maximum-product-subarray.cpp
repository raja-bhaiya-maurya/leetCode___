class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minPr=nums[0],maxPr=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();i++){
           if(nums[i]<0){
             swap(maxPr,minPr);
           }

           maxPr=max(nums[i],maxPr* nums[i]);
           minPr=min(nums[i],minPr* nums[i]);
           ans= max(ans,maxPr);
        }
        return ans;
    }
};