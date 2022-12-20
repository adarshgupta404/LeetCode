class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0, k = needle.length();
        if(needle.size()==0)   //no needle to find
            return 0;
        while(j<haystack.length())
        {
            if(j-i+1<k)
                j++;
            else
            {
                if(haystack.substr(i, j-i+1)==needle)
                    return i;
                i++;
                j++;
            }
        }
        return -1;
    }
};