class Solution {
public:
    bool isPalindrome(long long x) {
        long long a = x,r,p=0;
        while(x!=0&&x>0)
        {
            r = x%10;
            p = p*10 + r;
            x = x/10;
        }
        return p==a;
    }
};