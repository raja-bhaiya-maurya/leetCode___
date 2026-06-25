class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, maxProfit = 0, currProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            currProfit = prices[i] - minPrice;
            if (currProfit > maxProfit)
                maxProfit = currProfit;
            if (prices[i] < minPrice)
                minPrice = prices[i];
        }
        return maxProfit;
    }
};