class Solution {
public:
    bool isAMatch(char a, char b){
        return (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']');
    }
    bool isValid(string s) {
        stack<char> st;
        for (auto& c : s){
            if(c=='(' || c=='{' || c=='[')
                st.push(c);
            else{
                if(st.empty())
                    return false;
                if(isAMatch(st.top(), c)==false)
                    return false;
                else
                    st.pop();
            }
        }
        return st.empty()==true;
    }
};