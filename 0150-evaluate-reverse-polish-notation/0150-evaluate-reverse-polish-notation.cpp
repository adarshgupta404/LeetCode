class Solution {
public:
    int evalRPN(vector<string>& token) {
        long long a(0), b(0);
        int n = token.size();
        stack<long long> s;
        for(int i = 0; i<n; i++)
        {
            if(token[i]=="*"||token[i]=="+"||token[i]=="-"||token[i]=="/")
            {
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                if(token[i]=="*")
                    s.push(a*b);
                else if(token[i]=="+")
                    s.push(a+b);
                else if(token[i]=="-")
                    s.push(b-a);
                else
                    s.push(b/a);
            }
            else
            {
                a = stoi(token[i]);
                s.push(a);
            }
        }
        return s.top();
    }
};