class Solution {
public:
    string removeOuterParentheses(string s) {

        stack<char> st;
        string s1="";string s2="";
        for(int i=0;i<s.length();i++){
            s1+=s[i];
            if(s[i]=='(') st.push('(');
            else st.pop();
            if(st.empty()){
                s1.erase(0,1);
                s1.pop_back();
                s2+=s1;
                s1="";
            }
        }
        return s2;
    }
};