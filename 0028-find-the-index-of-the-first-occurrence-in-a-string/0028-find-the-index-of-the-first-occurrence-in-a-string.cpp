class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length(), n = needle.length();

        // window sliding
        //  for (int i = 0; i <= h-n; i++) {
        //      if (haystack.substr(i, n) == needle) {
        //          return i;
        //      }
        //  }

        // two pointer
        if (needle.empty()) {
            return 0;
        }
        if (n > h) {
            return -1;
        }
        int j = 0;
        for (int i = 0; i < h; i++) {
            if (haystack[i] == needle[j]) {
                j++;
                if (j == n) {
                    return i - n + 1;
                }
            } else {
                i = i - j;
                j = 0;
            }
        }

        return -1;
    }
};