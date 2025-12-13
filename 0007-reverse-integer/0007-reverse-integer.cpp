
class Solution {
  public:        
int reverse(long long x) {
      int digit=0;long long rev=0;
       if(x>=INT_MIN  && x<=INT_MAX){
         
           while(x!=0){
                digit=x%10;
                rev=rev*10+digit;
                x/=10;
            }

       }else 
             return 0;

             if (rev>=INT_MIN  && rev<=INT_MAX)
        return rev;
        else return 0;
    }
        };