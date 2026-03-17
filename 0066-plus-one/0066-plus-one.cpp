class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size();
      if(digits[n-1]!= 9){
        digits[n-1]+= 1;
        return digits;
      }else{
           for(int i=n-2;i>=0;i--){
            if(digits[i]==9)continue;
            
                digits[i]+=1;
                 for(int j=i+1;j<n;j++){
                digits[j]=0;
                 } 
            return digits;
           }
            
            digits[0]=1;
            for(int i=1;i<n;i++){
                digits[i]=0;
            }
            digits.push_back(0);
           
      }
        
      
      return digits;
    }
};