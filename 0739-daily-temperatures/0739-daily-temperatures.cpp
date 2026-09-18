class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;vector<int> ans(temperatures.size(),0);
        int prev;
        for (int i = 0; i < temperatures.size(); i++) {

            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                prev=st.top();
                ans[prev]=i-prev;
                st.pop();
            }

            st.push(i);
        }
        return ans;
    }
};