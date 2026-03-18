class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();int missing;
        int s,e,mid=-1,j=-1;
        for( j=0;j<n-1;j++){
             missing= target-numbers[j];
                s=j+1;e=n-1;//optimization to kar hi raha hai + conceptual bhi hai for(mid!=j)
           while(e>=s){

                    mid = s+((e-s)/2);
           if(numbers[mid]==missing ){
                 return {j+1,mid+1};
           }
           else if(numbers[mid]>missing){
                e=mid-1;
           }
                else{
                    s=mid+1;
                }
           }
       
        }
      return {j+1,mid+1};
    }
};