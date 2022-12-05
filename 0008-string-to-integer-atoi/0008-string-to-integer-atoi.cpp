class Solution {
public:
    int myAtoi(string s) {
        long long int result = 0;
        int sign = 1;
        int i = 0;
        while(i<s.size()&&s[i]==' ')i++;  //ignore leading white space
        if(s[i]=='+'||s[i]=='-')
            sign = (s[i++]=='+')? 1:-1;
        while('0'<=s[i] && s[i]<='9')
        {
            int digit = (s[i++]-'0')*sign;
            if(sign==1 && (result>INT_MAX/10 || (result==INT_MAX/10 && digit>INT_MAX%10))) 
                return INT_MAX; //check for overflow
            if(sign==-1 &&(result<INT_MIN/10 || (result==INT_MIN/10 && digit<INT_MIN%10))) 
                return INT_MIN; //check for underflow
            result = result*10 + digit;
        }
        return result;
    }
};