class Solution {
public:
    bool isMatch(char a, char b) {
        if ((a == '(' && b == ')') || (a == '{' && b == '}') ||
            (a == '[' && b == ']'))
            {
                return true;
            }
            return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for(auto c: s){
            if(c=='('||c=='['||c=='{'){
                st.push(c);
            }else{
                if(st.empty()){
                    return false;
                }
                if(!isMatch(st.top(), c)){
                    return false;
                }else{
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};