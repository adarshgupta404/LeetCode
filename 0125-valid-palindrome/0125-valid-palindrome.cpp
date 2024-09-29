class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                str += tolower(s[i]);
            }
        }
        int i = 0;
        int j = str.length() - 1;
        while (i <= j) {
            if (str[i] == str[j]) {
                i++, j--;
                continue;
            } else
                return false;
        }
        return true;
    }
};