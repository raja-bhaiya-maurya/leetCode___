class Solution {
public:
    int passwordStrength(string password) {
    int strength=0;
    char ch;
    unordered_map<char,int> m;
  for(int i=0;i<password.length();i++){
      ch= password[i];
      if(ch>='a'&& ch<='z' && !m.count(ch) ){
          m[ch]=i;
          strength+=1;
      }
      if(ch>='A'&& ch<='Z' && !m.count(ch) ){
           m[ch]=i;
          strength+=2;
      }
      if(ch>='0'&& ch<='9' && !m.count(ch) ){
            m[ch]=i;
          strength+=3;
      }
      if((ch=='!'|| ch=='@'||ch=='#'|| ch=='$') && !m.count(ch) ){
            m[ch]=i;
          strength+=5;
      }
      
  }
        return strength;
    }
};