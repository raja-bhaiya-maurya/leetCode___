class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();int k=0;
       int start=0,end=n-1,mid, ans=-1;
       while(start<=end){
        mid= start+(end-start)/2;
        if(nums[mid]<target){
            start=mid+1;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else{
            ans=mid;
            end=mid-1;
    }
    
    }
     start=0,end=n-1; 
     int ans2=-1;
     while(start<=end){
        mid= start+(end-start)/2;
        if(nums[mid]<target){
            start=mid+1;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else{
            ans2=mid;
            start=mid+1;
    }
    
    }

    return{ans,ans2};
    }
};