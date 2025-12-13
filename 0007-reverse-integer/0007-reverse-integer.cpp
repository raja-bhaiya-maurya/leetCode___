
class Solution {
  public:        
int reverse(long long x) {
 

   long rev=0;int New;
                 while(x!=0){
                New=x%10;
                rev=rev*10+New;
                x/=10;}
         

        
       if(rev>=INT_MIN && rev<=INT_MAX )return rev;else return 0; 
    }
        };