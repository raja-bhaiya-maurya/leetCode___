class Solution {
public:
    int evalRPN(vector<string>& tokens) {

    int size= tokens.size();
    stack<int>st;
    for(int i=0;i<size;i++){
        
        if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
            int b=st.top();st.pop();
            int a=st.top();st.pop();
            switch(tokens[i][0]){
                case '+':st.push(a+b);break;
                case '-':st.push(a-b);break;
                case '*':st.push(a*b);break;
                case '/':st.push(a/b);break;
            }

        }else{
           
        st.push(stoi(tokens[i]));
    }
    }
    return st.top();
   
    }
};