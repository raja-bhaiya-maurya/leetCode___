class Solution {

public:
    void shift(vector<int>& nums, int idx){
        int size= nums.size();
            for(int i=idx;i<size-1;i++){
                nums[i]=nums[i+1];
            }

    }

    int removeElement(vector<int>& nums, int val) {
        int size= nums.size();
            int count=0,i=0;
       for(i=0;i<size;i++){
            if(nums[i]!=val){
                    count++;
                    
            }
            else{
                shift(nums,i);
                i--;size--;
            }
            
        }
        return count;
    }
};