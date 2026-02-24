class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool turn =1;int first=0;int sec=0; int curr=0;

        for(int i=0;i<nums.size();i++){
            curr= nums[i]; 
          if(nums[i]%2!=0){
               turn =!turn;
                 
               }
            if(((i+1)%6)==0){
                 turn =!turn;
                
            }
            if(turn ==1){
                       first+=curr;
                   }else{
                sec+=curr;
                   }
          } 
        return first-sec;
        }
        
    
};