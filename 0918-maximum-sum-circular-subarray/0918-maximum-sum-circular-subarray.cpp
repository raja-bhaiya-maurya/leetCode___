class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0, minSum = INT_MAX, maxSum = INT_MIN,
            currMax = 0, currMin = 0;

        for (int i = 0; i < nums.size(); i++) {
            total += nums[i];

            currMin = min(nums[i], currMin + nums[i]);
            currMax = max(nums[i], currMax + nums[i]);

            minSum = min(currMin, minSum);
            maxSum = max(currMax, maxSum);
        }
        if (maxSum < 0)
            return maxSum;

        return max(total - minSum, maxSum);
    }
};