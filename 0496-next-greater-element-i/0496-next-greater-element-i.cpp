class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int size1= nums1.size();
        int size2= nums2.size();
        vector <int> j_;
        vector<int> ans;
        unordered_map<int,int> map1;
        for(int i=0;i<size2;i++){
            map1[nums2[i]]=i;
        }
        for( int i=0;i<size1;i++){
           j_.push_back( map1[nums1[i]]);

        }
        for(int i=0;i<size1;i++){
            int turn =0;
          for(int k=j_[i]+1;k<size2;k++){
            if(nums2[k]>nums2[j_[i]]){
                ans.push_back(nums2[k]);turn=1;
                break;
            }
                
            }if(!turn)ans.push_back(-1);
          }
     
        return ans;
    }
};