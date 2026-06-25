class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), k = 0, j = 0;
        vector<int> mark;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {

                mark.push_back(0);

            } else {
                k++;
                mark.push_back(1);
            }
        }
        mark.push_back(1);
        k++;

        for (int i = 0; i < n; i++) {
            if (mark[i] == 1) {
                nums[j] = nums[i];
                j++;
            }
        }
        return k;
    }
};