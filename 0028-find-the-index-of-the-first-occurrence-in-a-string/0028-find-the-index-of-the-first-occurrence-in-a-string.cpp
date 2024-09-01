class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length(), n = needle.length();
        for (int i = 0; i <= h-n; i++) {
            if (haystack.substr(i, n) == needle) {
                return i;
            }
        }
        return -1;
    }
};