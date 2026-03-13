class Solution {
public:
    void Sub(vector<vector<int>> &subset,vector<int>& nums ,int size, int i ,vector<int> &temp){
      

            if(i==size){
                subset.push_back(temp);
          
                return;
            }
                temp.push_back(nums[i]);
            Sub(subset, nums,size,i+1,temp);
            temp.pop_back();
            Sub(subset, nums,size,i+1,temp);
             
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subset; 
        int i=0;
        int size=nums.size();
          vector<int> temp;

        Sub(subset,nums,size,i,temp );
        return subset;

    }
};