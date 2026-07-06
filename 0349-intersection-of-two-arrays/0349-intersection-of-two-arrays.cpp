class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    if(nums1.size()>nums2.size()) swap(nums1,nums2);
      unordered_set<int> s1(nums1.begin(),nums1.end());
      vector<int> s2;
    
      for(int x: nums2){
        if(s1.count(x)){
            s2.push_back(x);
            s1.erase(x);
            
        }
      }

      return s2;
     
        
    }
};