class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1) return x;
        int s=0;
        int e= x/2;long long int mid=0;int ans=-1;
        while(s<=e){
            mid= s+(e-s)/2;
            
            if( (mid*mid)== x){
                 ans=mid;
                 break;
            }else if((mid*mid)>x){
                e=mid-1;
                  ans=mid-1;
            }else {
                s=mid+1;
                ans=mid;
            }
          
        }
        return ans;
    } 
};