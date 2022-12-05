class Solution {
public:
    bool matching(char a, char b)
    {
        return ((a=='(' && b==')')||(a=='[' && b==']')||(a=='{' && b=='}'));
    }
        
    bool isValid(string str) {
        stack<char> s;
        for(char c : str)
        {
            if(c == '(' || c == '{' || c == '[')
                s.push(c);
            else
            {
                if(s.empty())
                    return false;
                if(matching(s.top(),c)==false)
                    return false;
                else
                    s.pop();
            }   
        }
        return s.empty()==true;
    }
};