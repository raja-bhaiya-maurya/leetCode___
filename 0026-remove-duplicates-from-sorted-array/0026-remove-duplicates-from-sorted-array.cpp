class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), j = 0;int i;
      

        for ( i = 0; i < n-1; i++) {
            if (nums[i] != nums[i + 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        nums[j]=nums[i];
        return ++j;
    }
};