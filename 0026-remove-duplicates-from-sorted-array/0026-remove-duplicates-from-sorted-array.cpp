class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,k=1,j=i+1;
        int m=nums.size();
        while(j<m){
                    if(nums[i]==nums[j]){  
                   
                      nums.erase(nums.begin()+j);
                    
                      m--;
                    }
                    else {
                        i++;
                        k++;   j++;
                        
                    }
                    
        }
        return k;
    

    }
};