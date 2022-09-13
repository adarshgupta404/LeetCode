class Solution {
public:
    int longestPalindrome(string s) {
        int ar[256] = {0};
        for(int i = 0; i<s.length(); i++)
        {
            ar[s[i]]++;
        }
        int res = 0;
        bool oddfound = false;
        for(int i = 0;i<256;i++)
        {
            if(ar[i]%2==0)
                res += ar[i];
            else
            {
                oddfound = true;
                res += ar[i] - 1;
            }
        }
        if(oddfound)
            res++;
        return res;
    }
};