class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st;

        for(string s: tokens){
            if(s != "+" && s != "-" && s != "*" && s != "/"){
                st.push(stoi(s));
            }
            else if(s == "+"){
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                st.push(a + b);
            }
            else if(s == "-"){
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                st.push(a - b);
            }
             else if(s == "*"){
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                st.push(a * b);
            }
             else if(s == "/"){
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                st.push(a / b);
            }
        }
        return st.top();
    }
};
