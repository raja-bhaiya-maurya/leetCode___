class Solution {
public:
    string reverseVowels(string s) {
       vector<int> idx;
       vector<char> vowels;
       for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            vowels.push_back(ch);
            idx.push_back(i);
 
        }
       }
            reverse(vowels.begin(),vowels.end());
            int n= idx.size();
            for(int i=0;i<n;i++){
                s[idx[i]]=vowels[i];
            }

       
       return s;
    }
};