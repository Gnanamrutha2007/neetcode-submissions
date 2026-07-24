class Solution {
public:
    stack<int>st;
    int evalRPN(vector<string>& tokens) {
        for(string s :tokens){
            if(s=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int value= a+b;
                st.push(value);
            }
            else if(s=="-"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int value= b-a;
                st.push(value);
            }
            else if(s=="*"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int value= a*b;
                st.push(value);
            }
            else if(s=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int value= b/a;
                st.push(value);
            }
            else{
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};
